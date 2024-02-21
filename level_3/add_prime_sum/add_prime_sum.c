#include <unistd.h>
#include <stdlib.h>

int ft_atoi(char *s)
{
    int i = 0;
    int res = 0;
  
    if (s[i] == '-')
    {
        write(1, "0\n", 2);
        exit(0);
    }
    if (s[i] == ' ' || s[i] == '+')
            i++;
    while (s[i])
    {
        res += res * 10 + s[i] - '0';
        i++;
    }
    return (res);
}
void ft_putnbr(int n)
{
    char c;
    if (n >= 0 && n <= 9)
    {
        c = n +'0';
        write(1, &c, 1);
        return ;
    }
    ft_putnbr(n / 10);
    ft_putnbr(n % 10);
}
int is_prime(int n)
{
    int i = 2;
    if (n == 2 || n == 3)
        return (n);
    while (i * i <= n)
    {
        if (n % i == 0)
            return (0);
        i++;
    }
    return (n);
}
int main(int ac, char **av)
{
    int res = 0;
    int i = 2;
    int n;
    if (ac != 2)
    {
        write(1, "0\n", 2);
        exit(0);
    }
    n = ft_atoi(av[1]);
    while (i <= n)
    {
        res += is_prime(i);
        i++;
    }
    ft_putnbr(res);
    write(1, "\n", 1);
    return (0);
}