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
#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
        if (*b == 0)
        {
            return;
        } else
        {
            int temp;
            temp = *a;
            *a = *a / *b;
            *b = temp % *b;
        }
}

int		main(void)
{
    int x = 10;
    int y = 20;
    int *a = &x;
    int *b = &y;
    ft_ultimate_div_mod(&x, &y);
    printf("%d,%d",x,y);

	return (0);
}