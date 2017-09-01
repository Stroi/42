/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 15:51:25 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/07 16:03:57 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size);

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int temp;

	if (tab == 0)
	{
		return ;
	}
	i = 0;
	while (i + 1 < size)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
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
