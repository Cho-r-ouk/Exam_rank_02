#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i = 7;
    int j;
    char c;
    while (i >=0)
    {
        j = (octet >> i) & 1;
        c = j + '0';
        write(1, &c, 1);
        i--;
    }
}

// int main()
// {
//     print_bits('u');
// }