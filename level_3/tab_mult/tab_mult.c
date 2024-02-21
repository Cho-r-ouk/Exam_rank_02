#include <unistd.h>

int ft_atoi(char *s)
{
	int i = 0;
	int n = 0;

	while (s[i])
	{
		n = n * 10 + s[i] - '0';
		i++;
	}
	return (n);
}
void ft_putnbr(int n)
{
	char c;

	if (n >= 0 && n <= 9)
	{
		c = n + '0';
		write(1, &c, 1);
		return ;
	}
	ft_putnbr(n / 10);
	ft_putnbr(n % 10);
}
int ft_intlen(int n)
{
	int i = 0;

	while(n)
	{
		n /= 10;
		i++;
	}
	return (i);
}
void ft_putstr(char *s)
{
	int i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	int i = 1;
	int n;

	if (ac == 2)
	{
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		n = ft_atoi(av[1]);
		n = ft_intlen(n);
		ft_putstr(av[1]);
		write(1, " = ", 3);
		n = ft_atoi(av[1]) * i;
		ft_putnbr(n);
		write(1, "\n", 1);
		i++;
	}
	}
	else
		write(1, "\n", 1);
	return (0);
}
