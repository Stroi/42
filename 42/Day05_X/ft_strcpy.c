#include <stdio.h>
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

int     main()
{
    char dest[50] = "lkj";
    strcpy(dest, "afdsff");
    printf("%s\n", dest);

    ft_strcpy(dest, "bbgggggggggd");
    printf("%s\n", dest);

    strcpy(dest, "88");
    printf("%s", dest);
    return 0;
}