#include <unistd.h>
#include <stdio.h>
int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int k = 1;
	if (ac == 2)
	{
	while (av[1][i])
	{
		if (av[1][i] <= 'z' && av[1][i] >= 'a')
			k = av[1][i] - 'a' + 1;
		if (av[1][i] <= 'Z' && av[1][i] >= 'A')
			k = av[1][i] - 'A' + 1;
		j = 0;
		while (j < k)
		{
			write(1, &av[1][i], 1);
			j++;
		}
		k = 1;
		i++;
	}
	}
	write(1, "\n", 1);
	return (0);
}

