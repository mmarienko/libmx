#include "../inc/libmx.h"

char *mx_strndup(const char *str, size_t n) {
    char *result = mx_strnew(n);
    for (size_t i = 0; i < n; i++) {
        result[i] = str[i];
    }
    return result;
}
