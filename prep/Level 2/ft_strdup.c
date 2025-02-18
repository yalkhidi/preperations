#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}
char *ft_strcpy(char *dest, const char *src)
{
    int i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char *ft_strdup(char *src)
{
    int length = ft_strlen(src);
    char *dup;
    dup = (char *)malloc((length + 1) * sizeof(char));
    return(ft_strcpy(dup, src));
}

#include <stdio.h>

int main(void)
{
    char *src = "yu";
    char dest[5];
    printf("dest: %s", ft_strdup(src));
}