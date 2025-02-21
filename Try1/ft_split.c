#include <stdlib.h>
#define WDS 1000
#define LEN 1000
char **ft_split(char *str)
{
    char **split;
    int i;
    int a;
    int b;
    split = (char **)malloc(LEN + 1 * sizeof(char *));
    i=0;
    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    a = 0;
    while(str[i])
    {
        if (str[i] > 32)
        {
            b = 0;
            split[a] = (char *)malloc(WDS + 1 *sizeof(char));
            while(str[i] > 32)
            {
                split[a][b] = str[i];
                b++;
                i++;
            }
            split[a][b] = '\0';
            a++;
        }
        else
            i++;
    }
    split[a] = NULL;
    return (split);
}

#include <stdio.h>

int main (void)
{
    char **split = ft_split("yumna fhfj frhn  fed");
    int i = 0;
    while (split[i] != NULL)
    {
        printf("%s\n", split[i]);
        i++;
    }
}