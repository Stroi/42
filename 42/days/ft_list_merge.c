/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 20:25:26 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/19 23:05:29 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*tail;

	if (begin_list1 == 0)
		return ;
	if (*begin_list1 == 0)
		*begin_list1 = begin_list2;
	tail = *begin_list1;
	while (tail->next)
		tail = tail->next;
	tail->next = begin_list2;
}
