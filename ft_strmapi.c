#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *new;
	size_t i;

	new = ft_strdup(s);
	if (!new)
		return (NULL);
	i = 0;
	while(new[i])
	{
		new[i] = (*f)(i, new[i]);
		i++;
	}
	return (new);
}
