#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_first_word(char *str)
{
	int i;

	i = 0;
    //1st loop will skip spaces, tabs and new lines.
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
    //2nd loop will start when there will be character different than space, tab or new line. It will print out everything until next space, tab or new line.
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_first_word(av[1]);
		return (0);
	}
	else 
		ft_putchar('\n');
	return (0);
}