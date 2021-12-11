/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhouda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:09:57 by hhouda            #+#    #+#             */
/*   Updated: 2021/12/10 15:14:35 by hhouda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{	
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s);
	while (s[i])
	{
		if (s[len - 1 - i] == (char) c)
			return ((char *)&s[len - 1 - i]);
		i++;
	}
	if (s[i] == (char) c)
		return ((char *)s + i);
	return (0);
}
