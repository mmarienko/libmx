#include "../inc/libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {

    if (nbr <= 0) {
        return 0;
    }

    if(nbr < 10) {
        char a = nbr + 48;
        char* s;
        s = &a;
        return s;
    }
 
    int tmp = nbr;
    int arr[20];
    int count = 0;
    for (int i = 0; tmp > 15; i++) {
        arr[i] = tmp % 16;
        tmp = tmp / 16;
        count++;
    }

    count++;

    arr[count - 1] = tmp;

    //char* fin = mx_strnew(count);

    char* fin = malloc(count);

    for (int i = 0; i < count; i++) {
        if (arr[i] < 9) {
            fin[count - i - 1] = arr[i] + 48;
        }
        else if (arr[i] == 10) {
            fin[count - i - 1] = 97;
        }
        else if (arr[i] == 11) {
            fin[count - i - 1] = 98;
        }
        else if (arr[i] == 12) {
            fin[count - i - 1] = 99;
        }
        else if (arr[i] == 13) {
            fin[count - i - 1] = 100;
        }
        else if (arr[i] == 14) {
            fin[count - i - 1] = 101;
        }
        else if (arr[i] == 15) {
            fin[count - i - 1] = 102;
        }
    }
    return fin;
}
