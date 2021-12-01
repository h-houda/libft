#include "libft.h"

char *ft_strdup (const char *s)
{
	char *dup;
	dup = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!dup)
		return (NULL); 
		ft_strcpy(dup, s);
		return (dup);
}
