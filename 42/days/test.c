/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 13:39:20 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/19 20:08:13 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"
#include "ft_list_test.h"

int		main(int argc, char **argv)
{
	t_list	*head;

	head = ft_list_push_params(argc, argv);
	printf("list before reversal\n");
	ft_print_list_str(head);
	ft_list_reverse(&head);
	printf("list after reversal\n");
	ft_print_list_str(head);
	ft_list_clear(&head);
	return (0);
}
