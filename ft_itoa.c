/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhouda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:47:45 by hhouda            #+#    #+#             */
/*   Updated: 2021/12/10 14:57:44 by hhouda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_size(int n)
{
	int			count;
	long int	ln;

	ln = n;
	count = 1;
	if (ln < 0)
	{
		count++;
		ln = ln * (-1);
	}
	while (ln >= 10)
	{
		count++;
		ln = ln / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*result;
	int			i;
	long int	ln;
	int			size;

	size = get_size(n);
	ln = n;
	i = 1;
	result = (char *) malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		ln = ln * (-1);
	}
	result[size] = '\0';
	while (ln >= 10)
	{
		result[size - i] = (ln % 10) + '0';
		ln = ln / 10;
		i++;
	}
	result[size - i] = (ln % 10) + '0';
	return (result);
}
