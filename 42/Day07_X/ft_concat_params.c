#include <stdlib.h>
#include <stdio.h>

int		size_calculate(int argc, char **argv)
{
	int i;
	int j;
	int rtrn;

	i = 0;
	rtrn = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			j++;
		rtrn += j + 1;
		i++;
	}
	return (rtrn);
}

char	*fill_buffer(int argc, char **argv, char *str)
{
	int i;
	int j;
	int k;

	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			str[k] = argv[i][j];
			j++;
			k++;
		}
		i++;
		if (i < argc)
		{
			str[k] = '\n';
			k++;
		}
	}
	str[k] = '\0';
	return (str);
}

char	*ft_concat_params(int argc, char **argv)
{
	char *str;

	str = malloc(sizeof(char) * size_calculate(argc, argv));
	return (fill_buffer(argc, argv, str));
}
