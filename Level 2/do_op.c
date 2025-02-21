#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int is_op(char c)
{
    if (c == '*' || c == '/' || c == '-' || c == '+' || c == '%')
        return (1);
    return (0);
}

int main(int ac, char **av)
{
    int a1;
    int a2;
    int result = 0;
    if (ac == 4)
    {
        a1 = atoi(av[1]);
        a2 = atoi(av[3]);
        if (av[2][0] == '+')
            result = a1 + a2;
        else if (av[2][0] == '-')
            result = a1 - a2;
        else if (av[2][0] == '*')
            result = a1 * a2;
        else if (av[2][0] == '/')
            result = a1 / a2;
        else
            result = a1 % a2;
        printf("%d", result);
    }
    printf("\n");
}