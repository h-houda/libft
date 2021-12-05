#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *tab;
	size_t i;
	size_t j;
	size_t len_s;

	len_s = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start + len > len_s)
		tab = (char*) malloc(sizeof(char) * ((len_s - start) + 1));
	else
		tab = (char*) malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while(s[i])
	{
		if (i >= start && j < len)
		{
			tab[j] = s[i];
			j++;
		}
		i++;
	}
	tab[j] = 0;
	return(tab);
}
