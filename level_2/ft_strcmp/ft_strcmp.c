#include <string.h>
#include <stdio.h>

int ft_strcmp(const char *s1, const char *s2)
{
	int i = 0;
	while ((unsigned char)s1[i] == (unsigned char)s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}/*
int main()
{
	printf("%d\n", strcmp("hello", "hi"));
}*/
