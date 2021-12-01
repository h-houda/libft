#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *tab;
	size_t i;
	size_t j;

	if (!s)
		return (NULL);
	tab = (char*)malloc(sizeof(char) * (len + 1));
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
