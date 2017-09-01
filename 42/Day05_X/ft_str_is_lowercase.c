/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalta <jvalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 10:46:08 by jvalta            #+#    #+#             */
/*   Updated: 2017/08/15 15:21:57 by jvalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_low(char c)
{
	if (c <= 122 && c >= 97)
		return (1);
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_low(str[i]))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}


int main()
{
    printf("%d", ft_str_is_lowercase("asdf"));
}
