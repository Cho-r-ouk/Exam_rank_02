#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int n = 1;
	char t[100];

	t[0] = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					k = 0;
					while (k < n)
					{
						if (av[1][i] == t[k])
							break;
						k++;
					}
					if (k == n)
					{
						t[n] = av[1][i];
						n++;
						write(1, &av[1][i], 1);
						k = 0;
					}	
				}		
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
