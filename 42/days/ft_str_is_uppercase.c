/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:25:20 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/11 22:18:46 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_up_alpha(char c);
int		ft_str_is_uppercase(char *str);

int		ft_str_is_uppercase(char *str)
{
	char c;

	c = *str;
	while (c)
	{
		if (!is_up_alpha(c))
		{
			return (0);
		}
		c = *str++;
	}
	return (1);
}

int		is_up_alpha(char c)
{
	return (c >= 'A' && c <= 'Z');
}
