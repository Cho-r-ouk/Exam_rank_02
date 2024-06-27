#include <unistd.h>

int ft_found(char c, char *s, int found)
{
	int  i = 0;
	while (s[i] && found == 0)
	{
		if (s[i] == c)
		{
			found = 1;
			break ;
		}
		i++;
	}
	return (found);
}

int	ft_union(char *s1, char *s2, int n)
{
	int i = 0;
	int found = 0;
	while (s1[i])
	{ 
		found = 0;
		found = ft_found(s1[i], s2, found);
		if (found == 0)
		{
			write(1, &s1[i], 1);
			s2[n] = s1[i];
			s2[++n] = '\0';
		}
		i++;
	}
	return (n);
}

int main(int ac, char **av)
{
	char s[100];
	int n = 0;
	s[n] = '\0';
	if (ac == 3)
	{
		n = ft_union(av[1], s, n);
		n = ft_union(av[2], s, n);
	}
	write(1, "\n", 1);
	return (0);
}
