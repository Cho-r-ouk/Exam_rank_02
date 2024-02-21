#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;

    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] == ' ' && av[1][i + 1] && av[1][i + 1] != ' ')
                j = i;
            i++;
        }
        while (av[1][j] == ' ')
         j++;
        while (av[1][j] && av[1][j] != ' ')
            write(1, &av[1][j++], 1);
    }
    write(1, "\n", 1);
}