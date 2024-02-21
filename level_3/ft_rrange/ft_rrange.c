#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
    int signe = (start > end) - (start < end);
    int size = signe * (start - end);
    int *res = (int *)malloc(size * sizeof(int));
    int i = 0;
    while (i <= size)
    {
        res[i] = end + i * signe;
        i++;
    }
    return (res);
}

// int main()
// {
//     int start = 0;
//     int end = -3;
//     int signe = (start > end) - (start < end);
//     int size = signe * (start - end);
//     int *t = ft_rrange(start, end);
//     for (int i = 0; i <= size; i++)
//         printf("%d ", t[i]);
// }