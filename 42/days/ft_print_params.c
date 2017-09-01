/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:34:21 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/13 18:59:04 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv);
char	*ft_strarrcat(char **src, unsigned sz, char delim);
int		ft_strarrlen(char **str, unsigned sz);
int		ft_strlen(char *str);

char	*ft_concat_params(int argc, char **argv)
{
	return ft_strarrcat(argv + 1, argc - 1, '\n');
}

char	*ft_strarrcat(char **strarr, unsigned sz, char delim)
{
	unsigned	i;
	char		*head;
	char		*src;
	char		*flatstr;

	if (strarr == NULL || sz == 0)
		return NULL;
	flatstr = malloc(ft_strarrlen(strarr, sz));
	head = flatstr;
	i = 0;
	while (i < sz - 1)
	{
		src = *(strarr + i);
		while (*src)
			*flatstr++ = *src++;
		*flatstr++ = delim;
		i++;
	}
	src = *(strarr + i);
	while (*src)
		*flatstr++ = *src++;
	*flatstr++ = '\0';
	return (head);
}

int		ft_strarrlen(char **strarr, unsigned sz)
{
	unsigned i;

	i = 0;
	while (i < sz)
	{
		i += ft_strlen(*strarr) + 1;
		strarr++;
	}
	return (i);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}
