#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *src2;
	unsigned char *dest2;

	dest2 = (unsigned char*) dest;
	src2 = (unsigned char *) src;
	if (dest2 > src2)
		while (n > 0)
		{
			dest2[n-1] = src2[n-1];
			n--;
		}
	else 
	ft_memcpy(dest, src, n);
	return (dest);
}
