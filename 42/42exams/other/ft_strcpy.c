#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    while(s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = s2[i];
    return s1;
}

int     main()
{
    char *a = "hello";
    char *b = "hello world";
    char *c = "hello";
    char *d = "hello world";

    ft_strcpy(a, b);
    printf("%s\n", a);
    // strcpy(c, d);
    // printf("%s\n", c);

     
}