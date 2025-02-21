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

char *str_capitalizer(char *str)
{
    int i = 0;
    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] -= 32;
    i = 1;
    while(str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
            {
                if(!(str[i - 1] >= '0' && str[i - 1] <= '9'))
                {
                    if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
                    {
                        str[i] -=32;
                    }
                }
            }
        }
        i++;
    }
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
            str = str_capitalizer(av[i]);
            ft_putstr(av[i]);
            i++;
        }
    }
    write(1, "\n", 1);
}