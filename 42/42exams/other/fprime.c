/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalta <jvalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 11:55:13 by olkovale          #+#    #+#             */
/*   Updated: 2017/08/24 10:43:54 by jvalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define MY_INT_MIN ((int)(~(~0u >> 1)))
#define ISSPACE(c) (c == ' ' || c == '\t' || c == '\n')
#define ISDIGIT(c) (c >= '0' || c <= '9')

int		ft_prime_sieve(int p)
{
	int		k;
	int		div1;
	int		div2;
	int		square;

	if (p == 1)
		return (0);
	else if (p < 25)
		return (p % 2 == 0 || p % 3 == 0);
	k = 1;
	div1 = 6 * k - 1;
	div2 = 6 * k + 1;
	square = div1 * div1;
	while (square <= p)
	{
		if (p % div1 == 0)
			return (0);
		if (p % div2 == 0)
			return (0);
		k++;
		div1 = 6 * k - 1;
		div2 = 6 * k + 1;
		square = div1 * div1;
	}
	return (1);
}

int		ft_print_prime_f_helper(int *p, int form)
{
}

int		ft_next_prime(int *k)
{
	int		guess;

	guess = 6 * k - 1;
	if (ft_prime_sieve(guess))
		return (guess);
	else if (ft_prime_sieve(guess + 2))
		return (guess);
	*k += 1;
	return (ft_next_prime(guess, k));
}

int		main(int argc, char **argv)
{
	int		i;
	int		factors[1000];

	i = 0;
	if (argc == 2)
		ft_print_prime_f(atoi(argv[1]));
	printf("\n");
	return (0);
}
