#include <unistd.h>

int ft_strlen(char *s)
{
	int i = 0;
	while(s[i])
		i++;
	return i;
}
int main(int ac, char **av)
{
	int n;
	if (ac == 2){
		n = ft_strlen(av[1]);
		while (--n >= 0)
			write(1, &av[1][n], 1);
	}
	write(1, "\n", 1);
}
