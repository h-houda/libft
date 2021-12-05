#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*s_joined;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	s_joined = (char*) malloc(sizeof(char) * size);
	if (!s_joined)
		return (NULL);
	ft_memmove(s_joined, s1, ft_strlen(s1));
	ft_memmove(s_joined + ft_strlen(s1), s2, ft_strlen(s2));
	s_joined[size - 1] = '\0';
	return (s_joined);
}

int main (void)
{
	char s1[] = "test";
	char s2[] = "reussi";
	printf("%s", ft_strjoin(s1, s2));
	return (0);
}
