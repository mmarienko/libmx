#include "../inc/libmx.h"

void mx_pop_front(t_list **head)
{
    t_list *first_node = *head;
    t_list *second_node = first_node->next;

    *head = second_node;
    free(first_node);
}
