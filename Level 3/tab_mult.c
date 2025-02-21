#include <unistd.h>

void    ft_putnbr(int num)
{
    if (num == -2147483647)
        write(1, "-2147483647", 11);
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
    int outcome = 0;
    int sign = 1;

    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        else
            sign = 1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        outcome = outcome * 10 + (str[i] - '0');
        i++;
    }
    return (sign * outcome);
}
void    tab_mult(int num)
{
    int i = 0;
    while (i <= 9)
    {
        ft_putnbr(i);
        write(1, " x ", 3);
        ft_putnbr(num);
        write(1, " = ", 3);
        ft_putnbr(num*i);
        write(1, "\n", 1);
        i++;
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
        tab_mult(ft_atoi(av[1]));
    else
        write(1, "\n", 1);
}