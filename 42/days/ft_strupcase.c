/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 02:30:34 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/11 22:13:57 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);
int		is_low_alpha(char c);

char	*ft_strupcase(char *str)
{
	char c;
	char *head;

	if (str == 0)
	{
		return (0);
	}
	head = str;
	c = *str;
	while (c)
	{
		if (is_low_alpha(c))
		{
			*str = c - ' ';
		}
		c = *str++;
	}
	return (head);
}

int		is_low_alpha(char c)
{
	return (c >= 'a' && c <= 'z');
}
