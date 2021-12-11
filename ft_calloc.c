/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhouda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:39:43 by hhouda            #+#    #+#             */
/*   Updated: 2021/12/10 15:03:49 by hhouda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nbe, size_t size)
{
	void	*tab;

	tab = (void *)malloc(nbe * size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, size * nbe);
	return ((void *)tab);
}
