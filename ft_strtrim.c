/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhouda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:10:46 by hhouda            #+#    #+#             */
/*   Updated: 2021/12/13 17:01:47 by hhouda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*res;

	len = ft_strlen(s1);
	i = 0;
	while (check_set(s1[i], set))
		i++;
	while (i < len && check_set(s1[len - 1], set))
		len--;
	res = (char *)malloc(sizeof(char) * (len - i) + 1);
	if (!res || !s1)
		return (NULL);
	if (!set)
		return (ft_memmove(res, s1, len));
	j = 0;
	while (i < len)
	{
		res[j] = s1[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}
