#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char 	*tab;
	size_t 	len_s;
	size_t 	size;

	len_s = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= len_s)
		return (ft_strdup(""));
	if (start + len > len_s)
		size = len_s - start;
	else
		size = len;
	tab = (char*) malloc(sizeof(char) * (size + 1));
	if (!tab)
		return (NULL);
	ft_memcpy(tab, &s[start], size);
	tab[size] = 0;
	return (tab);
}
