/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhouda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:07:16 by hhouda            #+#    #+#             */
/*   Updated: 2021/11/23 16:07:19 by hhouda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
			return (1);
		else
			return (0);
}


/*
#include <ctype.h>
#include <stdio.h>

int main (int argc, char **argv)
{
	printf("fonction originale : %d\n", isalpha(argv[1][0]));
	printf("fonction ft : %d", ft_isalpha(argv[1][0])); 
	return (0);
}
*/

