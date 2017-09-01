/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 14:51:05 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/08 23:41:49 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power);

int		ft_recursive_power(int nb, int power)
{
	if (power < 1)
	{
		return (0);
	}
	return (ft_recursive_power(nb * nb, power - 1));
}
