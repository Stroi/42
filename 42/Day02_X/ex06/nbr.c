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

void	rev_digits(int n, int count, int nb)
{
		if(count!=0)
	{
	   int numberArray[count];

	   count = 0;    
	   n = nb;
	   while (n != 0){
	       numberArray[count] = n % 10;
	       n /= 10;
	       count++;
	   }
	   count -= 1;
	   while (count != (-1))
	    {
	        
	        ft_putchar('0' + numberArray[count]);
	        count--;
	    }
	}  
}

void    ft_print_numbers(int nb)
{   
	int count = -1;
	int n = nb;

	while (n != 0)
	{
	    n /= 10;
	    count++;
	}

	rev_digits(n,count,nb);
}



int		main(void)
{
	ft_print_numbers(456789);
	return (0);
}
