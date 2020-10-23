#include "../inc/libmx.h"

#include <stdio.h>

void mx_strdel(char **str) {
    *str = NULL;
    free(*str);
}
