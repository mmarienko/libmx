#include "../inc/libmx.h"

void mx_pop_back(t_list **head)
{
    t_list *before_last_node;
    t_list *last_node;

    for (t_list *i_node = *head; i_node != NULL; i_node = i_node->next)
    {
        before_last_node = last_node;
        last_node = i_node;
    }

    before_last_node->next = NULL;

    free(last_node);
}
