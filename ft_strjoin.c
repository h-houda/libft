/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhouda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:04:02 by hhouda            #+#    #+#             */
/*   Updated: 2021/12/10 15:21:32 by hhouda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	size_t	len_s1;
	size_t	len_s2;
	char	*s_joined;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	size = len_s1 + len_s2 + 1;
	s_joined = (char *)malloc(sizeof(char) * size);
	if (!s_joined)
		return (NULL);
	ft_memmove(s_joined, s1, len_s1);
	ft_memmove(s_joined + len_s1, s2, len_s2);
	s_joined[size - 1] = '\0';
	return (s_joined);
}
