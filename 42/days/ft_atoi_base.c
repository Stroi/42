/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 12:06:06 by olkovale          #+#    #+#             */
/*   Updated: 2017/08/14 22:57:29 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi_base(char *str, char *base);
int		scan_num_str(char *str, char *base);
char	*find_first_word_str(char *str);
char	*find_char(char *s, char c);
int		ft_strlen(char *s);

int		ft_atoi_base(char *str, char *base)
{
	int		sign;
	char	*first_num;

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
	return (sign * scan_num_str(str, base));
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

int		scan_num_str(char *str, char *base)
{
	char	c;
	char	*digit;
	int		num;
	int		len;

	len = ft_strlen(base);
	c = '\0';
	num = 0;
	while (str != 0)
	{
		c = *str;
		digit = find_char(base, c);
		if (digit)
		{
			num *= len;
			num += digit - base;
			str++;
		}
		else
			break ;
	}
	return (num);
}

char	*find_char(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	return (0);
}

int		ft_strlen(char *s)
{
	int i;

	if (s == 0)
	{
		return (0);
	}
	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
