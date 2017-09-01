
#include <stdio.h>

int		is_digit(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int		ft_str_is_numeric(char *str)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (is_digit(str[i]))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}


int main()
{
    printf("%d", ft_str_is_numeric("666"));
}