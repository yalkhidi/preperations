#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    int len;
    if (ac == 3)
    {
        while (av[1][i])
        {
            while(av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    len++;
                    break ;
                }
                j++;
            }
            i++;
        }
        if (av[1][len] == '\0')
            write(1, "1",1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
}