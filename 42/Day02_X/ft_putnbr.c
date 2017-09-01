/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalta <jvalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 22:03:38 by jvalta            #+#    #+#             */
/*   Updated: 2017/08/11 13:41:07 by jvalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_putchar(char a);

void	rev_digits(int n, int count, int nb)
{
	if (count != 0)
	{
		int number_array[count];

		count = 0;
		n = nb;
		while (n != 0)
		{
			numberArray[count] = n % 10;
			n /= 10;
			count++;
		}
		count -= 1;
		while (count != (-1))
		{
			ft_putchar('0' + numberArray[count]);
			count--;
		}
	}
}

void	ft_print_numbers(int nb)
{
	int count = -1;
	int n 
	n= nb;

	while (n != 0)
	{
		n /= 10;
		count++;
	}

	rev_digits(n, count, nb);
}

