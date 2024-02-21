#include "list.h"

// int ascending(int a, int b)
// {
// 	return (a <= b);
// }

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *tmp = lst;
    t_list *t;
    int m;
    if (!lst || !cmp)
        return ((t_list *){0});
    while (tmp->next)
    {
        t = lst;
        while (t->next)
        {
            if (!cmp(t -> data, t -> next -> data))
            {
                m = t -> data;
                t -> data = t -> next -> data;
                t -> next -> data = m;
            } 
            t = t -> next;
        }
        tmp = tmp -> next; 
    }
    return (lst);
}

// t_list *lst_new(int i)
// {
//     t_list *new = malloc(sizeof(t_list));
//     new -> n = i;
//     new -> next = NULL;
//     return (new);
// }
// void lst_addback(t_list *lst, t_list *new)
// {
//     t_list *tmp = lst;
//     while (tmp -> next)
//         tmp = tmp -> next;
//     tmp -> next = new;
// }
// int main()
// {
//     t_list *list = lst_new(0);
//     t_list *tmp;
//     int i = 6;
//     while (i--)
//         lst_addback(list, lst_new(i));
//     printf("befor:\n");
//     tmp = list;
//     while (tmp)
//     {
//         printf("%d\n", tmp -> n);
//         tmp = tmp -> next;
//     }
//     sort_list(list, &ascending);
//     printf("after:\n");
//     tmp = list;
//     while (tmp)
//     {
//         printf("%d\n", tmp -> n);
//         tmp = tmp -> next;
//     }
// }