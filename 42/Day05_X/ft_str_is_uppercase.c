#include <stdio.h>

int		is_upper(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_upper(str[i]))
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
    printf("%d", ft_str_is_uppercase("ASDF"));
}
