/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:25:20 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/11 22:18:28 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_low_alpha(char c);
int		ft_str_is_lowercase(char *str);

int		ft_str_is_lowercase(char *str)
{
	char c;

	c = *str;
	while (c)
	{
		if (!is_low_alpha(c))
		{
			return (0);
		}
		c = *str++;
	}
	return (1);
}

int		is_low_alpha(char c)
{
	return (c >= 'a' && c <= 'z');
}
