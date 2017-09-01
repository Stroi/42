#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, int n)
{
	int i;
	int length;

	length = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[length + i] = src[i];
		i++;
	}
	return (dest);
}


int     main()
{
    char dest[50] = "X";
    ft_strncat(dest,"asdf",1);
    printf("%s\n", dest);
    strncat(dest,"fas",3);
    printf("%s", dest);
    return 0;
}