/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 18:59:15 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/18 23:18:39 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		cmp;

	if (tab == 0 || f == 0 || length <= 0)
		return (0);
	i = 0;
	while (i + 1 < length)
	{
		cmp = f(tab[i], tab[i + 1]);
		if (cmp > 0)
		{
			return (0);
		}
	}
	return (1);
}
