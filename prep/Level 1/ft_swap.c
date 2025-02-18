void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

#include <stdio.h>
int main(void)
{
    int a = 8;
    int b = 10;
    printf("before\n a: %d, b: %d", a, b);
    ft_swap(&a, &b);
    printf("After\n a: %d, b: %d", a, b);

}