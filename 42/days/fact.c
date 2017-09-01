/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fact.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 15:32:58 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/08 15:50:13 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb);

int		ft_iterative_factorial(int nb)
{
	int factorial_number;
	int i;

	if (nb <= 0)
	{
		return 0;
	}
	i = nb - 1;
	factorial_number = nb;
	while (i > 1)
	{
		factorial_number *= i;
		i--;
	}
}

5! = 5 * 4 * 3 * 2 * 1

ft_iterative_factorial(5) | 5!

factorial_number = 5;
i = 5 - 1 = 4;

factorial_number = 5 * 4 = 20;
i = 4 - 1 = 3;

factorial_number = 20 * 3 = 60;
i = 3 - 1 = 2;

factorial_number = 60 * 2 = 120;
i = 2 - 1 = 1;

i is now less than 1
