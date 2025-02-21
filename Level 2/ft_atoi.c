
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

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("atoi: %d\n", atoi("-hhh+12345"));
    printf("ft_atoi: %d\n", ft_atoi("-hhh+12345"));
}