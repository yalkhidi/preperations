#include <unistd.h>

int main(int ac, char **av)
{
    int count = 1;
    int i = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
                count = av[1][i] - 'a' + 1;
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                count = av[1][i] - 'A' + 1;
            else
                count = 1;
            while (count > 0)
            {
                write(1, &av[1][i], 1);
                count--;
            }
            i++;
        }

    }
    write(1, "\n", 1);
}