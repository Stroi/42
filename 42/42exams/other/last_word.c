#include <unistd.h>
#define WHITESPCE(x) (x == ' ' || x == '\n' || x == '\t' || x == '\0')

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void put_str (char *c)
{	
	int i;

	i = 0 ;
	while(c[i])
	{
		ft_putchar(c[i]);
		i++;
		if (c[i] ==' ')
			return ;
	}
}

void last_word(char *c)
{
	int i;
	int pos1;

	i = 0;
	pos1 = 0;
	while (c[i])
	{
		if (c[i] == ' ' && c[i+1] != ' ' && c[i+1] != '\0')
		{
			pos1 = i;
		}
	i++;	
	}
	if (pos1 ==  0)
		put_str(&c[pos1]);
	else
		put_str(&c[pos1+1]);

}


int main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	last_word(argv[1]);
		ft_putchar('\n');
	return (0);
}
