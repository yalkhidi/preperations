#include <unistd.h>

void    ft_putnbr(int num)
{
    if (num > 9)
        ft_putnbr(num / 10);
    num = num % 10 + '0';
    write(1, &num, 1);
}

int main(int ac, char **av)
{
    (void)av;
    int i = ac - 1;
    ft_putnbr(i);
    write(1, "\n", 1);
}