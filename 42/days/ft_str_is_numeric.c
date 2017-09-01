/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:23:05 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/11 22:18:10 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_num(char *str);
int		is_num(char c);

int		ft_str_is_num(char *str)
{
	char c;

	c = *str;
	while (c)
	{
		if (!is_num(c))
		{
			return (0);
		}
		c = *str++;
	}
	return (1);
}

int		is_num(char c)
{
	return (c >= '0' && c <= '9');
}
