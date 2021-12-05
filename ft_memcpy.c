/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhouda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:08:03 by hhouda            #+#    #+#             */
/*   Updated: 2021/11/23 16:08:23 by hhouda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char *srcc;
	unsigned char *destc;
	size_t i;

	i = 0;
	destc = (unsigned char*) dest;
	srcc = (unsigned char*) src;
	while (i < n)
	{
	 destc[i] = srcc[i];
	 i++;
	}
	return (dest);
}

