#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *s1a;
	unsigned char *s2a;

	i = 0;
	s1a = (unsigned char*) s1;
	s2a = (unsigned char*) s2;

	while (i < n)
	{
		if (s1a[i] =! s2a[i])
			return (s1a[i] - s2a[i]);
		i++;
	}
}
