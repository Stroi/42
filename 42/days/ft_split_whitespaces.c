/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 23:06:36 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/15 17:20:16 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define ISSPACE(c) (c == ' ' || c == '\t' || c == '\n')

char		**ft_split(char *str);
char		*next_word(char *str);
char		*word_copy(char *dest, char *src);
unsigned	count_words(char *str);
unsigned	word_length(char *str);

char		**ft_split(char *str)
{
	unsigned	i;
	unsigned	count;
	char		**strarr;

	while (*str && ISSPACE(*str))
		++str;
	i = 0;
	count = count_words(str);
	strarr = malloc((count + 1) * sizeof(char *));
	while (i < count + 1)
	{
		strarr[i] = malloc(word_length(str) + 1);
		word_copy(strarr[i], str);
		str = next_word(str);
		i++;
	}
	strarr[count] = 0;
	return (strarr);
}

char		*next_word(char *str)
{
	while (*str && !ISSPACE(*str))
		str++;
	while (*str && ISSPACE(*str))
		str++;
	return (str);
}

unsigned	count_words(char *str)
{
	unsigned	i;

	i = 0;
	while (*str)
	{
		str = next_word(str);
		i++;
	}
	return (i);
}

unsigned	word_length(char *str)
{
	unsigned	i;

	i = 0;
	while (str[i] && !ISSPACE(str[i]))
		i++;
	return (i);
}

char		*word_copy(char *dest, char *src)
{
	char	*head;

	head = NULL;
	while (*src && !ISSPACE(*src))
		*dest++ = *src++;
	*dest = '\0';
	return (head);
}
