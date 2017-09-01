/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 18:48:13 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/18 23:18:22 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*map;

	if (tab == 0 || f == 0 || length <= 0)
		return (0);
	map = malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		map[i] = f(tab[i]);
		i++;
	}
	return (map);
}
