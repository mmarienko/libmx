#include "../inc/libmx.h"

char *mx_itoa(int number)
{
    int temp = number;
    char *num = malloc(16);
    int i = 0;
    if (number < 0)
    {
        temp = -temp;
    }
    while (temp != 0)
    {
        num[i] = temp % 10 + '0';
        temp /= 10;
        i++;
    }
    if (number < 0)
    {
        num[i] = '-';
    }
    char c = 0;
    int j = 0;
    for (i = 0, j = mx_strlen(num) - 1; i < j; i++, j--)
    {
        c = num[i];
        num[i] = num[j];
        num[j] = c;
    }
    return num;
}
