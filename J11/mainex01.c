#include <stdio.h>
#include "ft_list.h"
void    ft_list_push_back(t_list **begin_list, void *data);
int main(int argc, char **argv)
{
    if (argc > 1)
    {
        int i = 0;
        t_list *begin_list;
        begin_list = ft_create_elem("ancien_dernier_element");
        ft_list_push_back(&begin_list, argv[1]);
        while (begin_list != 0)
        {
            printf("Element %i : %s \n", i, begin_list->data);
            begin_list = begin_list->next;
            i++;
        }
    } else
        printf("Usage: %s [dernier element]\n", argv[0]);
    return (0);
}
