/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 18:11:36 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/19 18:15:57 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*tmp;
	t_list	*tail;

	if (begin_list == NULL)
		return ;
	tail = *begin_list;
	while (tail)
	{
		tmp = tail;
		tail = tail->next;
		free(tmp);
	}
	*begin_list = NULL;
}
