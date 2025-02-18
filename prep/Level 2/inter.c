#include <unistd.h>

int check(char *str, char c, int pos)
{
    int i = 0;
    while (i < pos)
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

void   ft_inter(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    while (s1[i])
    {
        j = 0;
        while (s2[j])
        {
            if (s1[i] == s2[j])
            {
                if (check(s1, s1[i], i))
                {
                    write(1, &s1[i], 1);
                    break ;
                }                    
            }
            j++;
        }
        i++;
    }
}
int main(int ac, char **av)
{
    if (ac == 3)
    {
        ft_inter(av[1], av[2]);
    }
    write(1, "\n", 1);
}