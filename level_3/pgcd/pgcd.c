#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int tmp;
	int a;
	int b;
	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		while (b)
		{
			tmp = a % b;
			a = b;
			b = tmp;
		}
	printf("%d", a);
	}
	printf("\n");
	return (0);
}

