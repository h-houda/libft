/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhouda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:12:05 by hhouda            #+#    #+#             */
/*   Updated: 2021/11/23 16:12:09 by hhouda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void *ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *s2;

	i = 0;
	s2 = (unsigned char*) s;
	while (i < n)
	{
		s2[i] = c;
		i++;
	}
	return (s);
}

/*
#include <stdio.h>
#include <string.h>

int main ()
{
	int tab[] = {1, 2, 3};
	printf("tab int original: ");
	int i = 0;
	while (i < 3)
	{
		printf("%d", tab[i]);
		i++;
	}

	printf("\ntab int memset: ");

	memset (tab, -4, 2);

	int j = 0;
	while (j < 3)
	{
		printf("%d", tab[j]);
		j++;
	}

	printf("\ntab int ft_memset: ");
	ft_memset (tab, -4, 2);

	int h = 0;
	while (h < 3)
	{
		printf("%d", tab[h]);
		h++;
	}

	printf("\n\n");

	char tabc[] = "Je suis beau";
	printf("tab char original: %s", tabc);

	printf("\n");

	memset (tabc+3, -5, 4);
	printf("tab char memset: %s", tabc);
	ft_memset (tabc+3, -5, 4);
	printf("\ntab char ft_memset: %s", tabc);
	}*/
