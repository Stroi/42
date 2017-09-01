#include <stdlib.h>

int		is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
	{
		return (1);
	}
	return (0);
}

int		is_char(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		word_count(str)
{
	
}



char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;

	while (str[i])
	{
		while(is_char(str[i]))
		{
			i++;
			j++;
			if (is_space(str[i+1]))
			{
				str[k] = malloc(j+1)
				
			}
		}
		i++;
	}
	
}