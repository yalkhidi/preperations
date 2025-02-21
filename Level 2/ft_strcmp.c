
int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <strings.h>

int main(void)
{
    char s1[] = "";
    char s2[] = "";
    printf("strcmp: %d\n", strcmp(s1, s2));
    printf("ft_strcmp: %d\n", ft_strcmp(s1, s2));
}