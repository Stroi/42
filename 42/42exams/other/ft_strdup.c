#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int i;
	int size;
	char *newStr;

	size = 0;
	while (src[size])
		size++;
	newStr = (char*)malloc(sizeof(char) * size);
	while (size > i)
	{
		newStr[i] = src[i];
		i++;
	}
	newStr[size] = '\0';
	return newStr;
}

int		main()
{
	printf("%s", ft_strdup("asdf"));
	return 0;
}