#include "libft.h"

void *ft_calloc(size_t nbe, size_t size)
{
	void *tab;

	tab = (void*)malloc(nbe * size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, size*nbe);
	return ((void*)tab);
}
