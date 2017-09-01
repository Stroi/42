int	ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}

// Test:
// #include <stdio.h>
// int     main()
// {
//     printf("%d", ft_strlen("asdf"));
// }