/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 14:38:02 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/08 14:50:39 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power);

int		ft_iterative_power(int nb, int power)
{
	if (power < 1)
	{
		return (0);
	}
	while (power > 1)
	{
		nb *= nb;
		power--;
	}
	return (nb);
}
