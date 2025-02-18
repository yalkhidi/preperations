#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
    int *array = NULL;
    int range = 0;
    int i = 0;
    if (start >= end)
    {
        range =  start - end + 1;
        array = (int *)malloc((range + 1) * sizeof(int));
        if (!array)
            return (NULL);
        while (i < range)
        {
            array[i] = start;
            start--;
            i++;
        }
    }
    else if (start < end)
    {
        range =  end - start + 1;
        array = (int *)malloc((range + 1) * sizeof(int));
        if (!array)
            return (NULL);
        while (i < range)
        {
            array[i] = start;
            start++;
            i++;
        }
    }
    return (array);
}

int main(void)
{
    int start = 0;
    int end = -3;
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
    int *arr = ft_range(start, end);
    int i = 0;
    while (i < range)
    {
        printf("%d, ", arr[i]);
        i++;
    }
}