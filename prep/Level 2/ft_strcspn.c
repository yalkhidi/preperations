#include <strings.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    size_t j;
    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}


#include <stdio.h>
int main(void)
{
    char str[] = "d u";
    const char charset[] = " .fer";
    printf("%lu\n", strcspn(str, charset));
    printf("%lu\n", ft_strcspn(str, charset));
}