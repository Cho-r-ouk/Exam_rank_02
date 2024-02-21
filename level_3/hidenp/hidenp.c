#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int found = 1;
	if (ac == 3)
	{
		while (av[1][i] && found == 1)
		{
			found = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					found = 1;
					j++;
					break ;
				}
				j++;
			}
			if (found == 0)
			{
				write(1, "0\n", 2);
				return (0);
			}
			i++;
		}
		if (!av[1][i] && found == 1)
			write(1, "1", 1);
	}
	write(1, "\n", 1);
	return (0);
}
