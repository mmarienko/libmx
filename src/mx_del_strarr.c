#include "../inc/libmx.h"

void mx_del_strarr(char ***arr) {
    int i = 0;
    *arr = NULL;
    while (arr[i] != '\0') {
        mx_strdel(arr[i]);
    }
}

int main() {
    char** bitch = malloc(45);
    mx_del_strarr(&bitch);
}
