/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 11:37:10 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/13 15:57:40 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max);

int		*ft_range(int min, int max)
{
	int		i;
	int		sz;
	int		*range;
	
	sz = max - min;
	if (sz <= 0)
		return NULL;
	range = malloc((sz) * sizeof(int));
	if (range == NULL)
		return NULL;
	i = 0;
	while (i < sz)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
