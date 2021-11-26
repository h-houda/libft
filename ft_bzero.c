/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhouda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:06:22 by hhouda            #+#    #+#             */
/*   Updated: 2021/11/23 16:06:35 by hhouda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}


/*#include <stdio.h>
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

	printf("\ntab int bzero: ");

	bzero (tab, 6);

	int j = 0;
	while (j < 3)
	{
		printf("%d", tab[j]);
		void	bzero(void *s, size_t n);j++;
	}

	printf("\ntab int ft_bzero: ");
	ft_bzero (tab, 6);

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

	bzero (tabc, 4);
	printf("tab char bzero: %s", tabc);
	ft_bzero (tabc, 4);
	printf("\ntab char ft_bzero: %s", tabc);
	}*/
