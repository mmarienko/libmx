#include "../inc/libmx.h"

char *mx_strtrim(const char *str)
{
	if (str == 0)
		return 0;
	int i = 0;
	int len = mx_strlen(str) - 1;
	char *trimmedStr = mx_strnew(len + 1);
	while (mx_isspace(str[i]))
	{
		i++;
	}
	while (mx_isspace(str[len]))
	{
		len--;
	}
	int len_true_string = len - i + 1;
	int j = 0;
	while (j < len_true_string)
	{
		trimmedStr[j] = str[i];
		j++;
		i++;
	}
	trimmedStr[j] = '\0';
	return trimmedStr;
}
