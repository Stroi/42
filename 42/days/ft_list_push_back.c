/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 10:59:07 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/19 23:25:49 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*node;
	t_list	*tail;

	node = ft_create_elem(data);
	tail = *begin_list;
	while (tail->next)
		tail++;
	tail->next = node;
}
