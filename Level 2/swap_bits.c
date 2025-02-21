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

unsigned char swap_bits(unsigned char octet)
{
    unsigned char first_half;
    unsigned char second_half;

    first_half = (octet % 16) * 16;
    second_half = octet / 16;
    return (first_half) + (second_half);
}



int main(void)
{
    unsigned char c = 5;
    print_bits(c);
    printf("\n");
    unsigned char r = swap_bits(c);
    print_bits(r);
    printf("\n");
}
