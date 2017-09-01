/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalta <jvalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 23:33:46 by jvalta            #+#    #+#             */
/*   Updated: 2017/08/09 23:33:53 by jvalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
void	ft_print_numbers(void)
{
	int a = '0';

	while(a <= '9') 
	
	{
		ft_putchar(a);
		a++;
	}
}

int	main() { 
	ft_print_numbers();
	return 0;
}
