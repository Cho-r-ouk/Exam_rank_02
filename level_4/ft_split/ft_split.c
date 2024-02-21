#include <stdio.h>
#include <stdlib.h>

int word_cound(char *s, int *t)
{
    int i = 0;
    int j = 0;
    int count = 0;
    while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
        i++;
    if (s[i] == '\0')
        return (0);
    t[j++] = i;
    count++;
    while (s[i])
    {
        if ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
            && s[i + 1] && !(s[i + 1] == ' ' || s[i + 1] == '\t' || s[i + 1] == '\n'))
        {
            count++;
            t[j++] = i + 1;
        }
        i++;
    }
    return (count);
}
char *str_dup(char *s, int n)
{
    int i = 0;
    char *r = (char *)malloc((n + 1) * sizeof(char));
    r[n] = '\0';
    while (i < n)
    {
        r[i] = s[i];
        i++;
    }
    return (r);
}
char    **ft_split(char *str)
{
    int tab[100] = {0};
    int n = word_cound(str, tab);
    int i = tab[0];
    int j = 0;
    int k = 0;
    char **split = (char **)malloc((n + 1) * sizeof(char *));
    split[n] = NULL;
    while (k < n)
    {  
        j = 0;
        while (str[i + j] != ' ' && str[i + j] != '\t' && str[i + j] != '\n')
            j++;
        split[k++] = str_dup(str + i, j);
        i = tab[k];
    }
    return (split);
}

// int main()
// {
//     int tab[100] = {0};
//     int n = word_cound("    hello\t again\n   !!!    ", tab);
//     printf("%d\n", n);
//     for (int i = 0; i < n; i++)
//         printf("%d\n", tab[i]);
//     char **s = ft_split("    hello\t again\n   !!!    ");
//     for (int i = 0; i < n; i++)
//         printf("%s\n", s[i]);
// }