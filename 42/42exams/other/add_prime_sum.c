#include <unistd.h>
#define CHECK(x) (33 <= x  && x  <= 126) 
#define NB(x) (c[i] < '0' || c[i] > '9')

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstring (char *c)
{	
	int i;

	i = 0;
	while (c[i])
	{
		ft_putchar(c[i]);
		i++;
	}
}

void ft_putnbr(int i)
{	
	if (i == -2147483648)
	{
		ft_putstring ("-2147483648");
		return ;
	}
		

	if(i < 0)
	{
		ft_putchar('-');
		i = -i;
	}
	if (i / 10 > 0)
		ft_putnbr (i / 10);
	ft_putchar (i%10 +'0');
}	

int ft_nbr(char *c)
{
	int i;
	int add;
	int m;
	
	m = 1;
	i = 0;
	add = 0;
	while(!(CHECK(c[i])))
		i++;
	
	while (c[i] == '-' || c[i] == '+')
	{
		if (c[i] == '-')
		   	m = (-1);	
		i++;
	}
	while(c[i])
	{
	if NB(c[i])
		return (0);
	add = add * 10;
	add =	add + (c[i] -'0');
	i++;
	if (c[i] < '0' || c[i] > '9')
		return (m * add);
	}
	return (m * add);
}



int main(int argc, char **argv)
{
	if(argc != 2)
		return (1);
	int test; 
	test = ft_nbr(argv[1]);
	if (test == 0)
		return (1);
	ft_putnbr(test);
	ft_putchar('\n');
	int i = 0;
	int c = 1;
	while (i < 30)
	{
		c = c * 2;
		i++;
	}
	c = (c-1) *2  + 1 ;
	ft_putnbr((-c)-1);
	return (0);
}
