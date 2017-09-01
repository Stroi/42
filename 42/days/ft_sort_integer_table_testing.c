/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table_testing.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 15:51:25 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/08 16:41:14 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size);

void	ft_sort_integer_table(int *tab, int size)
{
	if (tab == 0)
	{
		return ;
	}

	int i;

	i = 0;
	while (i + 1 < size)
	{
		if (tab[i] > tab[i + 1])
		{
			int temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
		{
			++i;
		}
	}
}

int		main()
{
	int test1[4] = {1,2,4,3};
	int test2[4] = {4,2,3,4};
	int test3[4] = {2,3,1,4};

	ft_sort_integer_table(test1, 4);
	ft_sort_integer_table(test2, 4);
	ft_sort_integer_table(test3, 4);

	printf("%d %d %d %d\n", test1[0], test1[1], test1[2], test1[3]);
	printf("%d %d %d %d\n", test2[0], test2[1], test2[2], test2[3]);
	printf("%d %d %d %d\n", test3[0], test3[1], test3[2], test3[3]);
}
