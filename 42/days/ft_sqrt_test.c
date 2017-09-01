/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 15:26:25 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/08 19:44:48 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb);

int		ft_sqrt(int nb)
{
	const int		max_i = 20;
	const double	epsilon = 1E-5;
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
	while (i < max_i && square < nb - epsilon || square > nb + epsilon)
	{
		square = root * root;
		root -= (square - nb) / 2 / root;
		i++;
	}
	fractional_part = (root - (int)root);
	return fractional_part > epsilon ? 0 : (int)root;
}

int		main()
{
	int i;
	int root;

	i = 0;
	root = 0;
	while (i <= 100)
	{
		root = ft_sqrt(i);
		if (root != 0)
		{
			printf("sqrt(%d) = %d\n", i, root);
		}
		i++;
	}
	return (0);
}
