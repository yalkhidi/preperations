int max (int *tab, unsigned int len)
{
    int max = 0;
    unsigned int i = 0;
    while (i < len)
    {
        if (max < tab[i])
            max = tab[i];
        i++;
    }
    return (max);
}

#include <stdio.h>
int main(void)
{
    int tab[4] = {5454546, 7868, 677, 674744};
    printf("max: %d\n", max(tab, 4));
}