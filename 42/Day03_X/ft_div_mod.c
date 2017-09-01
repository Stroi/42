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

void    ft_div_mod(int a,int b, int *div, int *mod)
{
        if (b == 0)
        {
            return;
        } else
        {
            *div = (a/b);
            *mod = (a%b);
        }      
}

int		main(void)
{
    int a = 20;
    int b = 10;
    int div;
    int mod;

    ft_div_mod(a,b, &div, &mod);
    printf("%d,%d",div,mod);
	return (0);
}