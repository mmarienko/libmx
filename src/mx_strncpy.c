#include "../inc/libmx.h"

char *mx_strncpy(char *dst, const char *src, int len)
{
    int i = 0;
    while (i != len && src[i] != '\0')
    {
        *dst = *src;
        dst++;
        src++;
        i++;
    }
    *dst = '\0';
    return dst;
}

