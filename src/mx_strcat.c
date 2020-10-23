#include "../inc/libmx.h"

char *mx_strcat(char *s1, const char *s2)
{
    char *ptr = malloc(mx_strlen(s1) + mx_strlen(s2) + 1);

    int i = 0;
    for (; i < mx_strlen(s1); i++)
    {
        ptr[i] = s1[i];
    }

    for (int j = i; j < mx_strlen(s2) + i; j++)
    {
        ptr[j] = s2[j - i];
    }

    s1 = ptr;
    
    return s1;
}

