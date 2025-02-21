#include <stdlib.h>
#include <string.h>
int length(int nbr)
{
    int len = 0;
    if (nbr <= 0)
    {
        nbr = -nbr;
        len++;
    }
    while( nbr > 0)
    {
        len++;
        nbr /= 10;
    }
    return(len);
}

char *ft_itoa(int nbr)
{
    int len = length(nbr);
    char *result;
    result = (char *)malloc((len + 1) * sizeof(char));
    if (!result)
        return (NULL);
    if (nbr == -2147483648)
        return (strdup("-2147483648"));
    result[len] = '\0';
    if (nbr == 0)
    {
        result[0] = '0';
    }
    if (nbr < 0)
    {
        nbr = -nbr;
        result[0] = '-';
    }
    while (nbr)
    {
        result[--len] = (nbr % 10) + '0';
        nbr /= 10;
    }
    return(result);
}

#include <stdio.h>
int main(void)
{
    printf("%s\n", ft_itoa(0));
    printf("%s\n", ft_itoa(1));
    printf("%s\n", ft_itoa(42));
    printf("%s\n", ft_itoa(1001));
    printf("%s\n", ft_itoa(-0));
    printf("%s\n", ft_itoa(-2));
    printf("%s\n", ft_itoa(-24));
    printf("%s\n", ft_itoa(-2147483648));
    // printf("%s\n", ft_itoa(2147483647));
    // printf("%s\n", ft_itoa(-10));
    // printf("%s\n", ft_itoa(333));
    // printf("%s\n", ft_itoa(-4333));
}