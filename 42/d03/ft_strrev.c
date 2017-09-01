#include <stdio.h>

char	*ft_strrev(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	char *start;
	char *end;

	start = str;
	end = start + i - 1;
	while(end > start)
	{
		char temp;
		
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}

	return str;

}