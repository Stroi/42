/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:14:36 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/11 22:17:28 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str);
int		is_alpha(char c);

int		ft_str_is_alpha(char *str)
{
	char c;

	c = *str;
	while (c)
	{
		if (!is_alpha(c))
		{
			return (0);
		}
		c = *str++;
	}
	return (1);
}

int		is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
