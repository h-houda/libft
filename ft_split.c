#include "libft.h"

int	string_count(char const *str, char c)
{
	int	i;
	int	count;
	int	string;

	count = 0;
	string = 0;
	i = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i])
	{
		if (str[i] != c && str[i])
			string = 1;
		if (str[i] == c)
		{
			while (str[i] == c && str[i])
				i++;
			if (str[i])
				count++;
		}
		else
			i++;
	}
	return (count + string);

}

char	*create_substring(char const *str, char c)
{
	size_t start;
	char *substring;

	start = 0;
	while (str[start] && str[start] != c)
		start++;
	substring = (char*)malloc(sizeof(char) * (start + 1));
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, str, start + 1);
	return (substring);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	nbstrings;
	char **allstrings;

	i = 0;
	nbstrings = string_count((char*)s, c);
	allstrings = (char**) malloc(sizeof(char*) * (nbstrings + 1));
		if (!allstrings || !s)
		return (NULL);
	while (i < nbstrings)
	{
		while (s[0] == c)
			s++;
		allstrings[i] = create_substring((char*)s, c);
		s = s + ft_strlen(allstrings[i]);
		i++;
	}
	allstrings[i] = (NULL);
	return (allstrings);
}

	