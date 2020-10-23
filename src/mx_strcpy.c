#include "../inc/libmx.h"

char *mx_strcpy(char *dst, const char *src)
{
    int i = 0;
    while (i != mx_strlen(src))
    {
        *dst = *src;
        dst++;
        src++;
        i++;
    }
    *dst = '\0';
    return dst;
}
