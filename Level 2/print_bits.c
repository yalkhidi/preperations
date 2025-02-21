#include <stdio.h>
#include <unistd.h>

void    ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

void    print_bits(unsigned char octet)
{
    char str[9];
    str[8] = 0;
    int i = 7;
    while (i >= 0)
    {
        printf("%d %% 2 = %d\n",octet, octet%2);
        if ((octet % 2) == 1)
            str[i] = '1';
        else if ((octet % 2) == 0)
            str[i] = '0';
        printf("%d / 2 = %d\n",octet, octet/2);
        octet = octet / 2;
        i--;
    }
    ft_putstr(str);
}



int main(void)
{
    // unsigned char x = 5;
    // unsigned char y = 8;

    // if (x % 2 == 1) {
    //     printf("%d is ODD\n", x);
    // }
    // if (y % 2 == 0) {
    //     printf("%d is EVEN\n", y);
    // }
    print_bits(5);
}
