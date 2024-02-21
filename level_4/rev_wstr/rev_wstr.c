#include <unistd.h>

int ft_strlen (char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

int count_words(char *s)
{
	int i = 0;
	int count = 0;
	while(s[i])
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\v')
			count++;
		i++;
	}
	return (++count);
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int count = 0;
	char c;
	char tab[100];
	int n;
	if (argc == 2)
	{

	n = ft_strlen (argv[1]);
		while(1)
		{
			if (count_words(argv[1]) == 1)
					break;
		while (argv[1][i] && i < n)
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t'
					|| argv[1][i] == '\v')
			{
				c = argv[1][i];
				j = i + 1;
			}
			i++;
		}
		i = j;
		while(j < n)
		{
			write(1, &argv[1][j], 1);
			j++;
		}
		write(1, &c, 1);
		count++;
		n = i - 1;
		i = 0;
		if (count + 1 == count_words(argv[1]))
			break;
		}
		i = 0;
		while (i < n)
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
