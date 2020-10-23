#include "../inc/libmx.h"

int mx_quicksort(char **arr, int left, int right)
{
    int count = 0;
    if (arr != NULL)
    {
        int i = left + 1;
        int j = right;
        int x = (left + right) / 2;
        if (right - left == 1)
        {
            if (mx_strlen(arr[left]) > mx_strlen(arr[right]))
            {
                mx_swap(arr, left, right);
            }
            return 1;
        }
        while (i < j)
        {
            while ((mx_strlen(arr[i]) < mx_strlen(arr[x])) && (i <= right))
                i++;
            while ((mx_strlen(arr[j]) > mx_strlen(arr[x])) && (j >= left))
                j--;
            if (i < j)
            {
                mx_swap(arr, i, j);
            }
            if (left < j - 1)
            {
                i = left + 1;
                j = j - 1;
                x = (i + j) / 2;
                while ((mx_strlen(arr[i]) < mx_strlen(arr[x])) && (i <= right))
                    i++;
                while ((mx_strlen(arr[j]) > mx_strlen(arr[x])) && (j >= left))
                    j--;
                if (i < j)
                {
                    mx_swap(arr, i, j);
                }
            }
            if (j + 1 < right)
            {
                i = j + 1;
                j = right;
                x = (i + j) / 2;
                while ((mx_strlen(arr[i]) < mx_strlen(arr[x])) && (i <= right))
                    i++;
                while ((mx_strlen(arr[j]) > mx_strlen(arr[x])) && (j >= left))
                    j--;
                if (i < j)
                {
                    mx_swap(arr, i, j);
                }
            }
            count++;
        }
        return count;
    }
    else
    {
        return -1;
    }
}
