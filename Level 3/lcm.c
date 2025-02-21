
unsigned int lcm(unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0)
        return (0);
    unsigned int i = 0;
    if (a > b)
        i = a;
    else if (b > a)
        i = b;
    while (1)
    {
        if ((i % a == 0) && (i % b == 0))
            return (i);
        i++;
    }
    return (0);
}

#include <stdio.h>
int main(void)
{
    printf("%u\n", lcm(3, 6));
}