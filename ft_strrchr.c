#include "libft.h"

char *ft_strrchr (const char *s, int c)
{	
	int i;
	int len;

	i = 0;
	len = ft_strlen(s);

	while (s[i])
	{
		if (s[len - 1 - i] == c)
			return (&s[len - 1 - i]);
		i++;
	}
}
