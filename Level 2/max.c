
int max(int *tab, unsigned int len)
{
    int max = 0;
    int i = 0;

    while (i < len)
    {
        if (max < tab[i])
            max = tab[i];
        i++;
    }
    return(max);
}


#include <stdio.h>
int main(void)
{
    int tab[5] = {1000, 4, 6000, 540000, 545};
    printf("max: %d\n", max(tab, 5));
}