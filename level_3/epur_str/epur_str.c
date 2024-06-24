#include <unistd.h>

int ft_strlen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
}

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    int n;

    if (ac != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (av[1][i] == ' ' || av[1][i] == '\t')
        i++;
    n = ft_strlen(av[1]) - 1;
    while (av[1][n - j] == ' ' || av[1][n - j] == '\t')
        j++;
    while (av[1][i] && i <= n - j)
    {
        if ((av[1][i] == ' ' || av[1][i] == '\t')
            && (av[1][i + 1] == ' ' || av[1][i + 1] == '\t'))
            i++;
        else
        {
            if (av[1][i] == '\t')
                av[1][i] = ' ';
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
