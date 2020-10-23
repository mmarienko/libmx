#include "../inc/libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len)
{
    const char *begin;
    const char *const last_possible = (const char *)big + big_len - little_len;
    if (little_len == 0)
        return (void *)big;
    for (begin = (const char *)big; begin <= last_possible; ++begin)
        if (begin[0] == ((const char *)little)[0] &&
            !mx_memcmp((const void *)&begin[1],
                       (const void *)((const char *)little + 1),
                       little_len - 1))
            return (void *)begin;
    return NULL;
}
