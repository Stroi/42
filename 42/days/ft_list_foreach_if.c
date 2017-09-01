/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 20:25:26 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/19 21:26:31 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void				ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
					void *data_ref, int (*cmp)())
{
	while (begin_list)
	{
		if ((*cmp)(begin_list->data, data_ref) == 0)
			(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}
