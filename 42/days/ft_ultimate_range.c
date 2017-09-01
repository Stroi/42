/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 11:37:10 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/13 18:01:51 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max);

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		sz;

	sz = max - min;
	*range = (int *)malloc(sz * sizeof(int));
	i = 0;
	if (sz > 0 && *range)
		while (i < sz)
		{
			(*range)[i] = min + i;
			i++;
		}
	else
		sz = 0;
	return (sz);
}
