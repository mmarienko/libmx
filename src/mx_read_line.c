#include "../inc/libmx.h"

int mx_read_line(char **lineptr, int buf_size, char delim, const int fd) {
    static char *ostatok = NULL;
    char buf[buf_size + 1];
    int read_bytes = 0;
    int delim_index = -1;
    char *tmpstr = NULL;
    char *tmp = NULL;
    if(fd < 0){
        return -2;
    }
    if (ostatok) {
        tmpstr = mx_strdup(ostatok);
    }
    while ((read_bytes = read(fd, buf, buf_size)) >= 0) {
        buf[read_bytes] = '\0';
        tmp = mx_strjoin(tmpstr, buf);
        mx_strdel(&tmpstr);
        tmpstr = mx_strdup(tmp);
        mx_strdel(&tmp);
        delim_index = mx_get_char_index(tmpstr, delim);
        if (delim_index != -1) {
            tmpstr[delim_index] = '\0';
            if (ostatok) {
                mx_strdel(&ostatok);
            }
            ostatok = mx_strdup(tmpstr + delim_index + 1);
            break;
        }
        if (read_bytes == 0) {
            if (ostatok) {
                mx_strdel(&ostatok);
            }
            break;
        }
    }
    if (read_bytes == -1) {
        return -1;
    }
    *lineptr = mx_strdup(tmpstr);
    mx_strdel(&tmpstr);
    return mx_strlen(*lineptr);
}


