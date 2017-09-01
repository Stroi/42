/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalta <jvalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 10:20:10 by jvalta            #+#    #+#             */
/*   Updated: 2017/08/16 15:58:56 by jvalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_char(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		ft_str_is_alpha(char *str)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (is_char(str[i]))
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
    printf("%d", ft_str_is_alpha("djghd"));
}