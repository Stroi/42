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

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int length;

	length = strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[length + i] = src[i];
		i++;
	}
	return (dest);
}


int     main()
{
    char dest[50] = ">";
    // strcat(dest, "gh");
    // printf("%s\n", dest);

    ft_strcat(dest, "OOOOOOOOOOOOOOO ");
    printf("%s\n", dest);

    strcat(dest, "XXXXXXXXXXXXXXX");
    printf("%s", dest);
    return 0;
}