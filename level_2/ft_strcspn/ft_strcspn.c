#include <stdio.h>

static int ft_include(char c, const char *charset)
{
	int i = 0;

	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *charset)
{
	int i = 0;

	while (s[i] && !ft_include(s[i], charset))
		i++;
	return (i);
}

