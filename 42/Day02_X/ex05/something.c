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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
    int a;
    int b;
    
    a = 0;
    b = 0;
    while (a <= 99)
    {    
        while (b <= 99)
        {
            ft_putchar('0' + a/10);
            ft_putchar('0' + a%10);
            ft_putchar(' ');
            ft_putchar('0' + b/10);
            ft_putchar('0' + b%10);
            ft_putchar(',');
            ft_putchar(' ');
            b++;
        }
        a++;
        b = a + 1;
    }
}


int		main(void)
{
	ft_print_comb();
	return (0);
}
