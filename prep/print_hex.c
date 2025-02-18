#include <unistd.h>

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

void    ft_puthex(int num)
{
    if (num >= 16)
        ft_puthex(num / 16);
    num = num % 16;
    if ((num > 9) && num < 16)
        num = 'a' + (num - 10);
    else
        num = num + '0';
    write(1, &num, 1);
}
int main(int ac, char **av)
{
    int num;
    if (ac == 2)
    {
        num = ft_atoi(av[1]);
        ft_puthex(num);
    }
    write(1, "\n", 1);
}