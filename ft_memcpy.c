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
	int i;

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


/*#include <stdio.h>
#include <string.h>

int main ()
{
	const char srcc[] = "je suis la source";
	char destc[300] = "je suis la dest et je suis plus grand que la src";
	char destc2[300] = "je suis la dest et je suis plus grand que la src";
	
	const int srci[] = {1, 2, 3};
	int desti[300] = {4, 5, 6, 7, 8};
	int desti2[300] = {4, 5, 6, 7, 8};

	printf("srcc: %s\n", srcc);
	printf("destc avant memcpy: %s\n", destc);
	memcpy(destc, srcc, ft_strlen(srcc)-1);
	printf("destc apres memcpy: %s\n", destc);
	ft_memcpy(destc2, srcc, ft_strlen(srcc)-1);
	printf("destc apres ft_memcpy: %s\n", destc2);


	printf("\nsrci: ");
	int h = 0;
	while (h < 3)
	{
		printf("%d", srci[h]);
		h++;
	}
	
	printf("\ndesti avant memcpy: ");
	int i = 0;
	while (i < 5)
	{
		printf("%d", desti[i]);
		i++;
	}

	memcpy(desti, srci, 5);
	
	printf("\ndesti apres memcpy: ");
	int j = 0;
	while (j < 5)
	{
		printf("%d", desti[j]);
		j++;
	}

	ft_memcpy(desti2, srci, 5);
	
	printf("\ndesti apres ft_memcpy: ");
	int k = 0;
	while (k < 5)
	{
		printf("%d", desti[k]);
		k++;
	}
	return(0);
}*/
