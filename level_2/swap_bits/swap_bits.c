#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

// unsigned char	swap_bits(unsigned char octet)
// {
// 	int i = 0;
// 	int tmp;
// 	int tab[8];
// 	while (i < 8)
// 	{
// 		tab[7 - i] = octet % 2;
// 		octet /= 2;
// 		i++;
// 	}
// 	octet = 0;
// 	i = 0;
// 	while (i < 4)
// 	{
// 		tmp = tab[i];
// 		tab[i] = tab[i + 4];
// 		tab[i + 4] = tmp;
// 		i++;
// 	}
// 	i = 0;
// 	while (i < 8)
// 	{
// 		octet = octet * 2 + tab[i];
// 		i++;
// 	}
// 	return octet;
// }
/*
int main()
{
	printf("%i", swap_bits(112));
}*/
