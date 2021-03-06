
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
	if (c == '\f' || c == '\v')
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
	// Going through spaces
	while (is_space(str[i]))
	{
		i++;
	}
    // Checking the sings, if there is '-' change "sign" to "-1" 
	if (str[i] == '-')
        sign = -1;
    // Increase the index after first sign
    if (str[i] == '-' || str[i] == '+')
        i++;
	// If there are numbers after spaces or signs, loop will go through them until the end of first number.
	while (is_digit(str[i]))
	{
		// Add current number to the result
		result = result + (str[i] - '0'); 
		// Check if there is a number after this one, if yes multiply by ten
		// Example: 123asd
		// result = 1 
		// next character is a number therefore:
		// result * 10 (= 10)
		// i++;
		// current number is 2
		// result + 2 (= 12)
		// ...
		// next is a, therefore don't multiply 10'
		// loop ends
		if (is_digit(str[i + 1]))
			result = result * 10;
		i++;
	}
	return (result * sign);
}

#include <stdio.h>
#include <stdlib.h>

int		main()
{
    printf("ft_atoi X atoi\n");
	printf("    %d X", ft_atoi("   +342"));
	printf(" %d\n", atoi("         +342"));
	printf("   %d X", ft_atoi("    -342"));
	printf(" %d\n", atoi("         -342"));
	printf("      %d X", ft_atoi(" --342"));
	printf(" %d\n", atoi("         --342"));
	printf("      %d X", ft_atoi(" ++342"));
	printf(" %d\n", atoi("         ++342"));
	printf("      %d X", ft_atoi(" +-342"));
	printf(" %d\n", atoi("         +-342"));
	return (0);
}
