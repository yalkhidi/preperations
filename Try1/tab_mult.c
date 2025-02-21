#include <unistd.h>

void    ft_putnbr(int num)
{
    if (num == -2147483647)
    {
        write(1, "-2146483647", 11);
        return ;
    }   
    if (num < 0)
    {
        write(1, "-", 1);
        num = -num;
    }
    if (num > 9)
        ft_putnbr(num / 10);
    num = num % 10 + '0';
    write(1, &num, 1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int result = 0;
    int sign = 1;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (sign * result);
}

void    tab_mult(int n)
{
    int i = 1;
    while (i < 10)
    {
        ft_putnbr(i);
        write(1, " x ", 3);
        ft_putnbr(n);
        write(1, " = ", 3);
        ft_putnbr(i*n);
        write(1, "\n", 1);
        i++;
    }
}

#include <stdio.h>
int main(int ac, char **av)
{
    int i = 0;
    if (ac == 2)
    {
        tab_mult(ft_atoi(av[1]));
    }
    else
        write(1, "\n", 1);
}