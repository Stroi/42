/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 20:25:26 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/19 23:33:19 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		done;
	t_list	*prev;
	t_list	*curr;
	void	*temp;

	done = 1;
	prev = *begin_list;
	curr = (*begin_list)->next;
	while (curr->next)
	{
		if ((*cmp)(prev->data, curr->data) > 0)
		{
			done = 0;
			temp = prev->data;
			prev->data = curr->data;
			curr->data = temp;
		}
		prev = curr;
		curr = curr->next;
	}
	if (!done)
		ft_list_sort(begin_list, cmp);
}
