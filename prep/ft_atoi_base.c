
int ft_atoi_base(const char *str, int str_base)
{
    int result = 0;
    int i = 0;
    int sign = 1;

    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i])
    {
        result = result * str_base;
        if (str[i] >= '0' && str[i] <= '9')
            result += str[i] - '0';
        else if (str[i] >= 'A' && str[i] <= 'Z')
            result += str[i] - '7';
        else if (str[i] >= 'a' && str[i] <= 'z')
            result += str[i] - 'W';
        i++;
    }
    return(sign * result);
}


#include<stdio.h>
int main()
{
    printf("%d\n", ft_atoi_base("ABCHIJ" ,10));
    return 0;
}