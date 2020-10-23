#include "../inc/libmx.h"

int mx_get_char_index(const char *str, char c)
{
    int rst = 0;
    if (str != NULL)
    {
        for (int i = 0; i < mx_strlen(str); i++)
        {
            if (str[i] == c)
            {
                rst = i;
            }
        }
        if (rst == 0)
        {
            return -1;
        }
        else
        {
            return rst;
        }
    }
    else
    {
        return -2;
    }
}
