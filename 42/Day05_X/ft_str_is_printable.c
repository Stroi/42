/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalta <jvalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 11:53:35 by jvalta            #+#    #+#             */
/*   Updated: 2017/08/15 15:45:19 by jvalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
	if (str[i] <= 31)
		return (0);
	i++;
	}
	return (1);
}



int     main()
{
    printf("%d\n", ft_str_is_printable("a\t"));
    printf("%d", ft_str_is_printable("a\t"));
}