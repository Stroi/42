#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
    int i;
    char *dup;

    i = 0;
    while(src[i] != 0)
    {
        i++;
    }
    dup = (char*)malloc(sizeof(char) * i);
    while(i != 0)
    {
        dup[i] = src[i];
        i--;
    }
    dup[i] = src[i];
    return dup;
}

int     main()
{

    printf("%s", ft_strdup("asdf"));
}