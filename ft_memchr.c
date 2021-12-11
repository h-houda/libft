/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhouda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:49:21 by hhouda            #+#    #+#             */
/*   Updated: 2021/12/10 14:59:02 by hhouda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*s2;

	i = 0;
	s2 = (const char *) s;
	while (i < n)
	{
		if ((unsigned char) s2[i] == (unsigned char) c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
