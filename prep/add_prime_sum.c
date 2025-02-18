#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int num)
{
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

    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i]- '0');
        i++;
    }
    return (sign * result);
}
int ft_is_prime(int num)
{
    if (num == 0 || num == 1 || num < 0)
        return(0);
    int i = 2;
    while (i <= num / 2)
    {
        if (num % 2 == 0)
            return (0);
        i++;
    }
    return (1);
}
int    add_sum_prime(int num)
{
    int sum = 0;
    int i = 0;
    while ( i <= num)
    {
        if (ft_is_prime(i))
        {
            sum += i;
        }
        i++;
    }
    return (sum);
}

int main(int ac, char **av)
{
    int sum = 0;
    if (ac == 2)
    {
        sum = add_sum_prime(ft_atoi(av[1]));
    }
    ft_putnbr(sum);
    write(1, "\n", 1);
}