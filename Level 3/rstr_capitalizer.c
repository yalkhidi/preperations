#include <unistd.h>

void    ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

char *rstr_capitalizer(char *str)
{
    int i = 0;
    int last = -1;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if ((str[i] >= 'a' && str[i] <= 'z'))
            last = i;
        if ((str[i] == ' ' || str[i] == '\t') && last!= -1)
        {
            str[last] -= 32;
            last = -1;
        }
        i++;
    }
    if (last != -1)
        str[last] -= 32;
    return (str);
}

int main(int ac, char **av)
{
    int i = 1;
    char *str;
    if (ac > 1)
    {
        while (i <= ac - 1)
        {
            str = rstr_capitalizer(av[i]);
            ft_putstr(av[i]);
            i++;
        }
    }
    write(1, "\n", 1);
}