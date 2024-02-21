#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *s)
{
    int i = 0;
    while(s[i])
        i++;
    while (s[i - 1] == ' ')
        i--;
    return (i);
}
int main(int ac, char **av)
{
    char tab[100];
    int i = 0;
    int j = 0;
    int k = 0;
    if (ac > 1)
    {
        k = ft_strlen(av[1]);
        while (av[1][i] == ' ' && i < k)
            i++;
        while (av[1][i] != ' ' && i < k)
            tab[j++] = av[1][i++];
        tab[j] = '\0';
        // write(1, tab, j);
        // write(1, "\n", 1);
        while (av[1][i] == ' ' && i < k)
            i++;
        while (av[1][i] != ' ' && i < k)
            write(1, &av[1][i++], 1);
        while (av[1][i] && i < k)
        {
            if (av[1][i] == ' ' && (av[1][i + 1] == ' ' || !av[1][i + 1]))
            {
                i++;
                continue ;
            }
            write(1, &av[1][i++], 1);
        if (i == k)
            write(1, " ", 1);
        }
        write(1, &tab[0], j);
    }
    write(1, "\n", 1);
    return (0);
}