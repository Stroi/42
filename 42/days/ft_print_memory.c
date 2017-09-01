/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:25:20 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/14 17:00:36 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MY_INT_MIN (~(~0u >> 1))

#define BITS_REV_0 (0)
#define BITS_REV_1 (8)
#define BITS_REV_2 (4)
#define BITS_REV_3 (12)
#define BITS_REV_4 ()

/*
 *	0000	0000
 *	0		0
 *
 *	0001	1000
 *	1		8
 *
 *	0010	0100
 *	2		4
 *
 *	0011	1100
 *	3		12
 *
 *	0100	0010
 *	4		2
 *
 *	0101	1010
 *	5		10
 *
 *	0110	0110
 *	6		6
 *
 *	0111	1110
 *	7		14
 *
 *	1000	0001
 *	8		1
 *
 *	1001	1001
 *	9		9
 *
 *	1010	0101
 *	10		5
 *
 *	1011	1101
 *	11		13
 *
 *	1100	0011
 *	12		3
 *
 *	1101	1011
 *	13		11
 *
 *	1110	0111
 *	14		7
 *
 *	1111	1111
 *	15		15
 */

void	*ft_print_memory(void *addr, unsigned int size);
void	ft_putchar(char c);
void	ft_putnbr_base(int n, char *base);
void	ft_print_hex_part(unsigned char *addr, unsigned size);
int		ft_strlen(char *s);

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned	i;
	unsigned	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		ft_putnbr_base((int)addr, "0123456789abcdef");
		ft_putchar(':');
		ft_putchar(' ');
		ft_print_hex_part((unsigned char *)addr, size);
		while (j++ < 16 && size--)
		{
			if (*(unsigned char *)addr >= ' ' && *(unsigned char *)addr <= '~')
				ft_putchar(*(unsigned char *)addr);
			else
				ft_putchar('.');
			++addr;
		}
		i += 16;
		j = 0;
		ft_putchar('\n');
	}
	return ((void *)((unsigned long)addr - (unsigned long)size));
}

void	ft_print_hex_part(unsigned char *addr, unsigned size)
{
	int i;

	i = 0;
	while (i < 16 && size--)
	{
		*addr < 16 ? ft_putchar('0') : 0;
		ft_putnbr_base(*addr, "0123456789abcdef");
		i % 2 ? ft_putchar(' ') : 0;
		i++;
		addr++;
	}
	return ;
}

void	ft_putnbr_base(int n, char *base)
{
	int is_int_min;
	int len;

	len = ft_strlen(base);
	is_int_min = 0;
	if (n < 0)
	{
		ft_putchar('-');
		if ((unsigned)n == (unsigned)MY_INT_MIN)
		{
			is_int_min = 1;
			n += 1;
		}
		n *= -1;
	}
	if (n < len)
		ft_putchar(base[n]);
	else
	{
		ft_putnbr_base(n / len, base);
		ft_putchar(base[n % len + is_int_min]);
	}
}

int		ft_strlen(char *s)
{
	int i;

	if (s == 0)
	{
		return (0);
	}
	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
