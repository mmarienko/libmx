#include "../inc/libmx.h"

void mx_swap(char **array, int a, int b)
{
    char *holder;
    holder = array[a];
    array[a] = array[b];
    array[b] = holder;
}
