#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
    long nb;
    int m = nbr;
    int n = 0;
    while (m)
    {
        m /= 10;
        n++;
    }
    n = n + (nbr <= 0);
    nb = nbr * ((nbr > 0) - (nbr < 0));
    char *s = (char *)malloc((n + 1) * sizeof(char));
    s[n] = '\0';
    while (--n >= 0)
    {
        s[n] = (nb % 10) + '0';
        nb /= 10;
    }
    if (nbr < 0)
        s[0] = '-';
    return (s);
}

// int main()
// {
//     printf("%s", ft_itoa(0));
// }