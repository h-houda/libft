/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhouda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:04:45 by hhouda            #+#    #+#             */
/*   Updated: 2021/11/23 16:04:49 by hhouda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*#include <ctype.h>
#include <stdio.h>

int main (int argc, char **argv)
{
	printf("fonction originale : %d\n", isascii(argv[1][0]));
	printf("fonction ft : %d", ft_isascii(argv[1][0]));
	return (0);
}*/
