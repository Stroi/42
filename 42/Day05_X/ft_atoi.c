#include <stdio.h>
#include <stdlib.h>


int		is_digit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int		is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
	{
		return (1);
	}
	if (c == '\f' || c == '\v' || c == '+')
	{
		return (1);
	}
	return (0);
}

int		ft_atoi(const char *str)
{
	int result;
	int sign;
	int i;

	result = 0;
	sign = 1;
	i = 0;
	while (is_space(*str))
	{
		str++;
	}
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (is_digit(str[i]))
	{
		result = result + (str[i] - '0');
		i++;
		if (is_digit(str[i]))
			result = result * 10;
	}
	return (result * sign);
}

int		main()
{
	printf("%d\n", ft_atoi("          -2147483648"));
	printf("%d", atoi("               -2147483648"));
}