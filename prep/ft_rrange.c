#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
    int range = 0;
    int *array = NULL;
    int i = 0;
    if (start >= end)
    {
        range = start - end + 1;
        array = (int *)malloc(range * sizeof(int));
        if (!array)
            return (NULL);
        while (i < range)
        {
            array[i] = end;
            end++;
            i++;
        }
    }
    else if (start < end)
    {
        range = end - start + 1;
        array = (int *)malloc(range * sizeof(int));
        if (!array)
            return (NULL);
        while (i < range)
        {
            array[i] = end;
            end--;
            i++;
        }
    }
    return (array);
}

int main(void)
{
    int start = 1;
    int end = 3;
    int range = 0;
    if (start >= end)
    {
        range = start - end + 1;
        printf("range: %d\n", range);
    }
    else if (start < end)
    {
        range = end - start + 1;
        printf("range: %d\n", range);
    }
    int *arr = ft_rrange(start, end);
    int i = 0;
    while (i < range)
    
    {
        printf("%d, ", arr[i]);
        i++;
    }
}