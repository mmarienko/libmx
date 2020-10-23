#include "../inc/libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace){
    int sum = mx_strlen(replace) - mx_strlen(sub);
    int len = mx_strlen(str) + mx_count_substr(str, sub) * sum;
    char *memory = mx_strnew(len);
    if (!str || !sub || !replace || mx_strlen(str) <= mx_strlen(sub))
        return NULL;
    else {
        for(int i = 0; i < len; i++, str++){
            while(!mx_strncmp((char *)str, (char *)sub, mx_strlen(sub))) {
                for(int j = 0; j < mx_strlen(replace);j++){
                    memory[i]=replace[j];
                    i++;
                }
                str+=mx_strlen(sub);
            }
            memory[i]=*str;
        }
        return memory;
    }
}
