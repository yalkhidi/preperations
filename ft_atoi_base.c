
int ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int result = 0;
    int sign = 1;

    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i])
    {
        result *= str_base;
        if (str[i] >= '0' && str[i] <= '9')
            result += str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            result += str[i] - 'W';
        else if (str[i] >= 'A' && str[i] <= 'f')
            result += str[i] - '7';
        i++;
    }
    return(sign * result);
}

#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_atoi_base("100", 4));
}