#include "../inc/libmx.h"

void mx_push_back(t_list **list, void *data)
{
    t_list *new_node = mx_create_node(data);
    t_list *last_node;

    for (t_list *i_node = *list; i_node != NULL; i_node = i_node->next)
    {
        last_node = i_node;
    }

    last_node->next = new_node;
}
