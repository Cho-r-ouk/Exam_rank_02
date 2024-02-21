#include <unistd.h>

int ft_strlen (char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}
int main(int ac, char **av)
{
	int i = 0;
	int n;

	if (ac == 2)
	{
		n = ft_strlen(av[1]);
		while (i < n)
		{
			while ((av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\v') && i < n)
				i++;
			while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\v' && i < n)
			{
				write(1, &av[1][i], 1);
				i++;
			}
			while ((av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\v') && i < n)
				i++;
			if (i < n)
				write(1, "   ", 3);
		}
	}
	write(1, "\n", 1);
	return (0);
}
