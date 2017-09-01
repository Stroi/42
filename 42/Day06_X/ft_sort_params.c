#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (s1[i] > s2[i] || s1[i] < s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}

void    print_params(int argc,char *arv[])
{
    int i;

    i = 1;
    while (i < argc)
	{
		ft_putstr(arv[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
    int count;
    char *temp;

    i = 1;
    count = argc;
    while (count > 0)
    {
        i = 0;
        while (i < (argc - 1))
        {
            if (ft_strcmp(argv[i], argv[i+1]) > 0)
            {            
                temp = argv[i];
                argv[i] = argv[i+1];
                argv[i+1] = temp;
            }
            i++;
        }
        count--;
    }
    print_params(argc, argv);
    return (0);
}