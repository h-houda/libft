#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return (big);
	while (big[i] && i < n)
	{
		j = 0;
		while (little[j] == big[i + j])
		 {
			if (little[j + 1] == '\0')
			return (&big[i]);
			j++;
		 }
		i++;
	}
	return (0);
}
