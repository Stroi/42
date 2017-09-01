#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
    str = malloc(sizeof(j + 1));
    ft_strcpy(str, src);
    return (str);
}

int     main()
{
    char str[0];

    printf("%s\n", ft_strdup("asdf"));
    
    printf("%s", strdup("asdf"));
}

// char    *ft_strdup(char *src)
// {
//     char *str;
//     char *cpy;
//     int len;

//     len =0;
//     while(src[len])
//     {
//         len++;
//         str = malloc(len + 1);
//         cpy = str;
//     }
//     while(*src)
// }