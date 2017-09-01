/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 13:26:56 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/12 22:55:03 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MY_INT_MIN (int)((~(~0u >> 1)))

void	ft_putchar(char c);
void	ft_putnbr(int c);

void	ft_putnbr(int n)
{
	int is_int_min;

	is_int_min = 0;
	if (n < 0)
	{
		ft_putchar('-');
		if (n == MY_INT_MIN)
		{
			is_int_min = 1;
			n += 1;
		}
		n *= -1;
	}
	if (n < 10)
	{
		ft_putchar(n + '0');
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0' + is_int_min);
	}
}
