/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 04:29:27 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/11 22:16:34 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);
int		is_up_alpha(char c);

char	*ft_strlowcase(char *str)
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
		if (is_up_alpha(c))
		{
			*str = c + ' ';
		}
		c = *str++;
	}
	return (head);
}

int		is_up_alpha(char c)
{
	return (c >= 'A' && c <= 'Z');
}
