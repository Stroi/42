/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 05:27:32 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/27 09:35:18 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *ptr;

void brainfuck(char *str);

void brainfuck(char *str)
{
	while (*str)
	{
		if (*str == '[' && *ptr == 0)
		{
			int depth = 1;
			while (*str && depth)
			{
				str++;
				if (*str == '[')
					depth++;
				else if (*str == ']')
					depth--;
			}
			continue ;
		}
		else if (*str == ']' && *ptr != 0)
		{
			int depth = 1;
			while (*str && depth)
			{
				str--;
				if (*str == '[')
					depth--;
				else if (*str == ']')
					depth++;
			}
			continue ;
		}
		else if (*str == '>')
			ptr++;
		else if (*str == '<')
			ptr--;
		else if (*str == '+')
			*ptr += 1;
		else if (*str == '-')
			*ptr -= 1;
		else if (*str == '.')
			write(1, ptr, 1);
		str++;
	}
	return ;
}

int main (int argc, char **argv)
{
	char *str;
	char *head;
	int i;
	
	if (argc > 1)
	{
		ptr = malloc(2048);
		head = ptr;
		i = -1;
		while (++i < 2048)
			ptr[i] = 0;
		str = argv[1];
		brainfuck(str);
	}
	free(head);
	return (0);
}
