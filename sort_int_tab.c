
void    sort_int_tab(int *tab, unsigned int size)
{
    int i = 0;
    int j = 0;
    int temp;
    while (i < size)
    {
        j = i + 1;
        while(j < size)
        {
            if (tab[j] < tab[i])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }
}

#include <stdio.h>
int main(void)
{
    int tab[5] = {1, 65474, 764,1, 1};
    int i = 0;
    while (i < 5)
    {
        printf("%d, ", tab[i]);
        i++;
    }
    printf("\n");
    sort_int_tab(tab, 5);
    i = 0;
    while (i < 5)
    {
        printf("%d, ", tab[i]);
        i++;
    }
    printf("\n");
}