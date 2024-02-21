#include <stdio.h>
#include <stdlib.h>

int ft_isprime(int n)
{
	int i = 2;

	while (i * i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}
int main(int ac, char **av)
{
	int i = 0;
	int n;

	int j = 2;
	if (ac == 2)
	{
		n = atoi(av[1]);
		if (n > 0)
		{
	while (j * j < n)
	{
		if (ft_isprime(j))
		{
	while (n % j == 0)
	{
		printf("%d*", j);
		n /= j;
	}
		}
		j++;
	}
	printf("%d\n", n);
}
else
printf("\n");
}
else
printf("\n");
	return (0);
}
