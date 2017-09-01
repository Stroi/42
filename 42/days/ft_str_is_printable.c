/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:25:20 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/11 22:19:04 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_printable(char c);
int		ft_str_is_printable(char *str);

int		ft_str_is_printable(char *str)
{
	char c;

	c = *str;
	while (c)
	{
		if (!is_printable(c))
		{
			return (0);
		}
		c = *str++;
	}
	return (1);
}

int		is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}
