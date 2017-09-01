/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   something.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalta <jvalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 21:55:27 by jvalta            #+#    #+#             */
/*   Updated: 2017/08/11 13:40:59 by jvalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char a);

void	ft_print_comb(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a <= 99)
	{
		while (b <= 99)
		{
			ft_putchar('0' + a / 10);
			ft_putchar('0' + a % 10);
			ft_putchar(' ');
			ft_putchar('0' + b / 10);
			ft_putchar('0' + b % 10);
			ft_putchar(',');
			ft_putchar(' ');
			b++;
		}
		a++;
		b = a + 1;
	}
}
