/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhouda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:05:27 by hhouda            #+#    #+#             */
/*   Updated: 2021/11/23 16:05:31 by hhouda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
		return (i);
}

/*#include <stdio.h>
int main (int argc, char **argv)
{
	printf("len = %ld", ft_strlen(argv[1]));
	return (0);
}*/
