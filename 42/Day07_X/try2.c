#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char    words_array(char *str)
{
    int i;
    int k;
    int j;
    char str1;

    while (str[i] != '\0')
    {
        if (str[i]==' ' || str[i]=='\t' || str[i]=='\n')
        {
            if (j != 0)
            {
                str = (char*)malloc(sizeof(*str) * (j + 1));
                k++;
                j = 0;
            }
        }
        else
            j++;
        i++;
    }
    return (str1);
}

void	**ft_split_whitespaces(char *str)
{
    int i, j = 0, k = 0;
    char str1;

    str1 = words_count(str);
    while (str[i] != '\0')
    {
        if (str[i]==' ' || str[i]=='\t' || str[i]=='\n')
        {
            if (j != 0)
            {
                str1[k][j] = '\0';
                k++;
                j = 0;
            }
        }
        else
        {
            str1[k][j] = str[i];
            j++;
        }
        i++;
    }
    str1[k][j] = '\0';

    i = 0;
    while (i < k + 1)
    {
        printf("%s ", str1[i]);
        i++;
    }
    return 0;
}

int     main()
{
    ft_split_whitespaces("asdf sadf  sdaf        dsaf sadf s");
    return (0);
}