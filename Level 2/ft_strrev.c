int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char    *ft_strrev(char *str)
{
    int i = 0;
    int len = ft_strlen(str) - 1;
    char temp;

    while (i < len)
    {
        temp = str[len];
        str[len] = str[i];
        str[i] = temp;
        len--;
        i++;
    }
    return (str);
}

#include <stdio.h>
int main(void)
{
    char str[] = "yumna";
    printf("%s\n", ft_strrev(str));
}