//NOT WORKING
// ! ! ! ! ! 
#include <stdio.h>

int     is_digit(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int     is_space(char c)
{
    if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	if (c == '\f' || c == '\v' || c == '+')
		return (1);
	return (0);
}

int     ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    result = 0;
	sign = 1;
	i = 0;
    while (str[i])
    {
        if (is_space(str[i]))
        {
            i++;
        }
        if (str[i] == '-')
        {
            sign = -1;
            i++;
        }
        if (is_digit(str[i]))
        {
            result = result + str[i] - '0';
            if (is_digit(str[i+1]))
                result = result * 10;
            i++;
        }
        i++;
    }
    return (result * sign);
}

int		main()
{
	printf("%d", ft_atoi("      +----342asd"));
	return (0);
}

