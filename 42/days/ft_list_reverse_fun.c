/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 18:11:36 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/19 23:39:35 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list *begin_list)
{
	t_list	*prev;
	t_list	*curr;
	t_list	*next;

	if (begin_list == 0)
		return ;
	prev = 0;
	curr = *begin_list;
	while (curr)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*begin_list = prev;
}
