/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 20:25:26 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/19 22:31:56 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*prev;
	t_list	*curr;

	curr = *begin_list;
	prev = NULL;
	while (curr)
	{
		if ((*cmp)(curr->data, data_ref) == 0)
		{
			if (prev == NULL)
				ft_list_remove_head(begin_list);
			else
				ft_list_remove_elem(prev, curr);
		}
		prev = curr;
		curr = curr->next;
	}
}

void	ft_list_remove_head(t_list **begin_list)
{
	t_list	*temp;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	temp = *begin_list;
	*begin_list = (*begin_list)->next;
	free(temp);
}

void	ft_list_remove_elem(t_list *prev, t_list *curr)
{
	t_list	*temp;

	if (prev == NULL || curr == NULL)
		return ;
	temp = curr;
	prev->next = curr->next;
	free(temp);
}
