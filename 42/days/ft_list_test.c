/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 20:01:35 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/19 20:07:25 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "ft_list.h"
#include "ft_list_test.h"

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

void	ft_print_list_str(t_list *head)
{
	t_list	*trav;

	trav = head;
	while (trav != NULL)
	{
		printf("%s\n", (char *)trav->data);
		trav = trav->next;
	}
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*node;

	node = ft_create_elem(data);
	node->next = *begin_list;
	*begin_list = node;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*head;

	head = ft_create_elem(av[0]);
	i = 1;
	while (i < ac)
	{
		ft_list_push_front(&head, av[i]);
		i++;
	}
	return (head);
}
