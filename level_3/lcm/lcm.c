// #include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int l;

    if (a == 0 || b == 0)
        return (0);
    if (a > b)
        l = a;
    else
        l = b;
    while (!(l % a == 0 && l % b == 0))
        l++;
    return (l);
}

// int main()
// {
//     printf("%u\n", lcm(15, 0));
// }