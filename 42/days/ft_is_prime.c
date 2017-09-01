/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 19:47:33 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/14 15:48:48 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb);
void	gen_primes(int primes[], int max);
void	initialize_array_int(int arr[], int sz, int value);
int		ft_sqrt(int n);

int		ft_is_prime(int nb)
{
	int i;
	int root;
	int primes[nb];

	if (nb == 0 || nb == 1 || !(nb % 2))
	{
		return (0);
	}
	root = ft_sqrt(nb);
	gen_primes(primes, root);
	i = 3;
	while (i <= root && primes[i])
	{
		if (!(nb % i))
		{
			return (0);
		}
		i += 2;
	}
	return (1);
}

void	gen_primes(int primes[], int max)
{
	int odd_number;
	int multiple;
	int composite;

	initialize_array_int(primes, max, 1);
	odd_number = 3;
	multiple = 6;
	composite = 9;
	primes[multiple] = 0;
	primes[composite] = 0;
	while (composite <= max)
	{
		primes[composite] = 0;
		composite += multiple;
		if (composite > max)
		{
			odd_number += 2;
			composite = odd_number * odd_number;
			multiple = odd_number * 2;
		}
	}
}

int		ft_sqrt(int n)
{
	const int		max_i = 20;
	double			root;
	double			square;
	int				i;

	if (n <= 0)
	{
		return (0);
	}
	root = 10.0;
	square = root * root;
	i = 0;
	while ((i < max_i && square < n - 1E-5) || (square > n + 1E-5))
	{
		square = root * root;
		root -= (square - n) / 2 / root;
		i++;
	}
	return ((int)root);
}

void	initialize_array_int(int arr[], int sz, int value)
{
	while (sz > 1)
	{
		arr[sz] = value;
		sz--;
	}
}
