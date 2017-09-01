/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 14:29:51 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/08 14:37:34 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb);

int		ft_iterative_factorial(int nb)
{
	int		factorial;

	factorial = nb;
	while (nb - 1 > 1)
	{
		nb--;
		factorial *= nb;
	}
	return (factorial);
}
