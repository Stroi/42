/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:53:54 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/11 22:21:12 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_strlen(const char *s);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int count;
	int i;
	int j;

	count = size;
	i = 0;
	j = 0;
	while (dest[i] && count--)
		++i;
	while (src[j] && count--)
	{
		dest[i + j] = src[j];
		j++;
	}
	printf("i + j = %d\n", i + j);
	dest[i + j - 1] = '\0';
	return ((size < i ? size : i) + ft_strlen(src));
}

int				ft_strlen(const char *s)
{
	int i;

	if (s == 0)
	{
		return (0);
	}
	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
