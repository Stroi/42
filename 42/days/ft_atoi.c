/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 12:06:06 by olkovale          #+#    #+#             */
/*   Updated: 2017/07/21 12:12:01 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);
int		scan_num_str(char *str);
char	*find_first_word_str(char *c);

int		ft_atoi(char *str)
{
	char	*first_num;
	int		sign;

	sign = 1;
	if (str == 0)
	{
		return (0);
	}
	first_num = find_first_word_str(str);
	if (first_num != 0 && *first_num != '\0')
	{
		str = first_num;
		sign = *first_num == '-' ? -1 : 1;
		str += *first_num == '-' || *first_num == '+';
	}
	return (sign * scan_num_str(str));
}

char	*find_first_word_str(char *str)
{
	char	c;
	int		whitespace;

	c = '\0';
	whitespace = 1;
	while (str != 0 && *str != '\0' && whitespace)
	{
		c = *str;
		whitespace = c == ' ' || c == '\t' || c == '\n';
		if (whitespace)
		{
			str++;
		}
	}
	return (str);
}

int		scan_num_str(char *str)
{
	char	c;
	int		digit;
	int		num;

	c = '\0';
	digit = 1;
	num = 0;
	while (str != 0 && digit)
	{
		c = *str;
		digit = c >= '0' && c <= '9';
		if (digit)
		{
			num *= 10;
			num += c - '0';
			str++;
		}
	}
	return (num);
}
