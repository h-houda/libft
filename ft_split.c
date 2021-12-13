/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhouda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:56:03 by hhouda            #+#    #+#             */
/*   Updated: 2021/12/13 16:55:56 by hhouda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	string_count(char const *str, char c)
{
	int	i;
	int	count;
	int	string;

	count = 0;
	string = 0;
	i = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i])
	{
		if (str[i] != c && str[i])
			string = 1;
		if (str[i] == c)
		{
			while (str[i] == c && str[i])
				i++;
			if (str[i])
				count++;
		}
		else
			i++;
	}
	return (count + string);
}

static char	*create_substring(char const *str, char c)
{
	size_t	start;
	char	*substring;

	start = 0;
	while (str[start] && str[start] != c)
		start++;
	substring = (char *)malloc(sizeof(char) * (start + 1));
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, str, start + 1);
	return (substring);
}

static char	**free_allocated_substrings(char **allstrings, int nb_allocated)
{
	int	i;

	i = 0;
	while (i < nb_allocated)
	{
		free(allstrings[i]);
		i++;
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		nbstrings;
	char	**allstrings;

	i = 0;
	nbstrings = string_count((char *)s, c);
	allstrings = (char **) malloc(sizeof(char *) * (nbstrings + 1));
	if (!allstrings || !s)
		return (NULL);
	while (i < nbstrings)
	{
		while (s[0] == c)
			s++;
		allstrings[i] = create_substring((char *)s, c);
		if (allstrings[i] == NULL)
			return (free_allocated_substrings(allstrings, i));
		s = s + ft_strlen(allstrings[i]);
		i++;
	}
	allstrings[i] = (NULL);
	return (allstrings);
}
