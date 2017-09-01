/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 14:52:50 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/19 23:27:03 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		i;

	i = 0;
	if (begin_list)
		i = 1;
	while (begin_list && begin_list->next)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}
