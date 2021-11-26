/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhouda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:03:40 by hhouda            #+#    #+#             */
/*   Updated: 2021/11/23 18:53:59 by hhouda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum (int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

/*#include <ctype.h>
#include <stdio.h>

int main (int argc, char **argv)
{
	printf("fonction originale : %d\n", isalnum(argv[1][0]));
	printf("fonction ft : %d", ft_isalnum(argv[1][0])); 
	return (0);
}*/
