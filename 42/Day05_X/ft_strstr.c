/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalta <jvalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 17:14:58 by jvalta            #+#    #+#             */
/*   Updated: 2017/08/16 11:10:58 by jvalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int size;
	int j;

	size = 0;
	i = 0;
	j = 0;
	while (to_find[size] != '\0')
		size++;
	if (size == 0)
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			if (j == size - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int main()
{
    printf("%s\n", ft_strstr("brandOn", "andb"));
	printf("%s", strstr("/brandOn", "andb"));
}