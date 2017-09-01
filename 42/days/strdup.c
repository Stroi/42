/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 20:14:51 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/13 14:26:55 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src);
char	*ft_strcpy(char *dest, const char *src);
int		ft_strlen(const char *str);

char	*ft_strdup(const char *src)
{
	char *dupe;

	if (src == NULL)
		return NULL;
	dupe = malloc(ft_strlen(src) + 1);
	return (ft_strcpy(dupe, src));
}

int		ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, const char *src)
{
	char *head;

	if (!(dest && src))
		return NULL;
	head = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (head);
}
