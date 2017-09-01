#include <stdio.h>
#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	while (str != NULL && str[i] != '\0')
	{
		i++;
	}
	i--;
	j = 0;
	while (j < i - j)
	{
		temp = str[j];
		str[j] = str[i - j];
		str[i - j] = temp;
		++j;
	}
    return str;
}

int main()
{
    printf("%s", ft_strrev("asdf"));
    return 0;
}