/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhouda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:05:04 by hhouda            #+#    #+#             */
/*   Updated: 2021/11/23 16:05:06 by hhouda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

#include <ctype.h>
#include <stdio.h>

/*int main (int argc, char **argv)
{
	printf("fonction originale : %d\n", isprint(argv[1][0]));
	printf("fonction ft : %d", ft_print(argv[1][0]));
	return (0);
}*/
