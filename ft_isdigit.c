/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhouda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:07:34 by hhouda            #+#    #+#             */
/*   Updated: 2021/11/23 16:07:37 by hhouda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
	if (c >= '1' && c <= '9')
		return (1);
	else
		return (0);
}

/*#include <ctype.h>
#include <stdio.h>

int main (int argc, char **argv)
{
	printf("fonction originale : %d\n", isdigit(argv[1][0]));
	printf("fonction ft : %d", ft_isdigit(argv[1][0])); 
	return (0);
}*/
