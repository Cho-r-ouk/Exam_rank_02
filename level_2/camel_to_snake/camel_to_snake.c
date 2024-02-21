#include <unistd.h>
#include <stdlib.h>

int ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}
int main(int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (!ft_isupper(av[1][i]))
			{
				write(1, &av[1][i], 1);
				i++;
			}
			else if (ft_isupper(av[1][i]))
			{
				av[1][i] += 32;
				write(1, "_", 1);
				write(1, &av[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
