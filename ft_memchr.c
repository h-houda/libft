#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	const char *s2;

	i = 0;
	s2 = (const char*) s;

	while (i < n)
	{
		if ((unsigned char) s2[i] == (unsigned char) c)
			return ((void*)(s + i));
		i++;
	}
	return (0);

}
