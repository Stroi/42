#include <unistd.h>
#include <stdlib.h>

char	*par(char *src, int way)
{
	int s;

	s = 0;
	while (1)
	{
		if (*src == '[')
			s++;
		else if (*src == ']')
			s--;
		if (s == 0)
			return (src);
		src += way;
	}
	return (NULL);
}

void	brainfuck(char *src, char *buf)
{
	while (*src != '\0')
	{
		if (*src == '>')
			buf++;
		else if (*src == '<')
			buf--;
		else if (*src == '+')
			(*buf)++;
		else if (*src == '-')
			(*buf)--;
		else if (*src == '.')
			write(1, buf, 1);
		else if (*src == '[' && !(*buf))
			src = par(src, 1);
		else if (*src == ']' && (*buf))
			src = par(src, -1);
		src++;
	}
}

int		main(int ac, char **av)
{
	char buf[2048];
	int a;

	if (ac > 1)
	{
		a = 0;
		while (a < 2048)
			buf[a++] = 0;
		brainfuck(av[1], buf);
	}
	else
		write(1, "\n", 1);
	return(0);
}