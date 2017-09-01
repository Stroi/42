/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalta <jvalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 20:06:44 by jvalta            #+#    #+#             */
/*   Updated: 2017/08/15 14:50:36 by jvalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 122 && str[i] >= 97)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}


int main()
{
    char str[] = "ASdfrfl";
    printf("%s", ft_strupcase(str));
}