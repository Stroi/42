#include <unistd.h>

void    ft_putchar(char c)
{
    write(1,&c,1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = nb - 2000000000;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

int     main()
{
    ft_putnbr(-2147483648);
}