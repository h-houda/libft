/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhouda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:31:32 by hhouda            #+#    #+#             */
/*   Updated: 2021/12/10 16:37:19 by hhouda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*s2a;

	s2a = (char *)s2;
	i = 0;
	while ((s1[i] || s2a[i]) && (i < n))
	{
		if (s1[i] != s2a[i])
			return ((unsigned char)s1[i] - (unsigned char) s2a[i]);
		i++;
	}
	return (0);
}
