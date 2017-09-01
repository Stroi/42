/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create-elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 10:47:37 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/19 13:53:47 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node)
	{
		node->data = data;
		node->next = NULL;
		return (node);
	}
	return (NULL);
}
