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
        if ((octet % 2) == 1)
            str[i] = '1';
        else if ((octet % 2) == 0)
            str[i] = '0';
        octet = octet / 2;
        i--;
    }
    ft_putstr(str);
}
unsigned char   reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char reversed = 0;
    while (i > 0)
    {
        reversed = (reversed * 2) + (octet % 2);
        octet = octet / 2;
        i--;
    }
    return (reversed);
}

#include <stdio.h>

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

    unsigned char bit = 65;
    print_bits(bit);
    printf("\n");
    unsigned char r = reverse_bits(bit);
    print_bits(r);
    printf("\n");
}