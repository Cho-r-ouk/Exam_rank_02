#include <unistd.h>

int char_to_int(char *s)
{
	int i = 0;
	int n = 0;
	while (s[i])
	{
		n = n * 10 + (s[i] - '0');
		i++;
	}
	return (n);
}

void ft_hexa(int n)
{
	char c[100];
	int i = 0;
	while (n)
	{
		c[i] = "0123456789abcdef"[n % 16];
		n /= 16;
		i++;
	}
	while(--i != -1)
		write(1, &c[i], 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int n = char_to_int(argv[1]);
		ft_hexa(n);
	}
	write(1, "\n", 1);
	return (0);
}

