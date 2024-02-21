#include <stdio.h>

int ft_strlen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
}
int	ft_atoi_base(const char *str, int str_base)
{
    int signe = 1;
    int res = 0;
    int i = 0;
    int j = 0;
    char basl[16] = "0123456789abcdef";
    char basu[16] = "0123456789ABCDEF";
    if (str[i] == '-')
    {
        signe = -1;
        i++;
    }
    while (str[i])
    {
        j = 0;
        while (j < 16 && basu[j] != str[i])
            j++;
        if (j == 16)
        {
            j = 0;
            while (j < 16 && basl[j] != str[i])
                j++;
            if (j == 16)
                break ;
        }
        res = res * str_base + j;
        i++;
    }
    return (signe * res);
}

// int main()
// {
//     printf("%d\n", ft_atoi_base("Ceci permet de decouvrir le fonctionnement de ton ft_atoi_base.", 16));
// }