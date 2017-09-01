/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalta <jvalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 16:50:34 by jvalta            #+#    #+#             */
/*   Updated: 2017/08/11 13:41:08 by jvalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_putchar(char a);

void	triple_putchar(char a,char b, char c)
{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (a != 7,b != 8,c != 9)
		{
			ft_putchar(',');
		} 	
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				triple_putchar(a,b,c)
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = a + 2;
	}
}
