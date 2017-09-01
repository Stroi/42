/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 15:26:25 by olkovale          #+#    #+#             */
/*   Updated: 2017/07/20 03:47:24 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb);

int		ft_sqrt(int nb)
{
	const int		max_i = 20;
	double			fractional_part;
	double			root;
	double			square;
	int				i;

	if (nb <= 0)
	{
		return (0);
	}
	root = 10.0;
	square = root * root;
	i = 0;
	while (i < max_i && square < nb - 1E-5 || square > nb + 1E-5)
	{
		square = root * root;
		root -= (square - nb) / 2 / root;
		i++;
	}
	fractional_part = (root - (int)root);
	return (fractional_part > 1E-5 ? 0 : (int)root);
}
