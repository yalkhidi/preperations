#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i = 1;
    int gcd = 0;
    int a ;
    int b;
    if (ac == 3)
    {
        a = atoi(av[1]);
        b = atoi(av[2]);
        while (i < a && i < b)
        {
            if (a % i == 0 && b %i == 0)
                gcd = i;
            i++;
        }
        printf("%d", gcd);
    }
    printf("\n");
}