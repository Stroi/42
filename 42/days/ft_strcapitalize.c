/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 04:31:08 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/11 22:17:48 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);
int		is_alpha_numeric(char c);
int		is_low_alpha(char c);
int		is_up_alpha(char c);

char	*ft_strcapitalize(char *str)
{
	char *head;

	head = str;
	while (*str)
	{
		if (is_alpha_numeric(*(str - 1)) && is_up_alpha(*str))
			*str += ' ';
		if (!is_alpha_numeric(*(str - 1)) && is_low_alpha(*str))
			*str -= ' ';
		++str;
	}
	return (head);
}

int		is_alpha_numeric(char c)
{
	return ((c >= '0' && c <= '9') ||
		is_low_alpha(c) || is_up_alpha(c));
}

int		is_low_alpha(char c)
{
	return (c >= 'a' && c <= 'z');
}

int		is_up_alpha(char c)
{
	return (c >= 'A' && c <= 'Z');
}
