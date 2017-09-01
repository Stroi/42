/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:25:20 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/11 22:22:53 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MY_INT_MIN (~(~0u >> 1))

void	ft_putstr_non_printable(char *str);
void	ft_putchar(char c);
void	ft_putnbr_base(int n, const char *base);
int		ft_strlen(const char *s);
int		valid_base(const char *s);

void	ft_putstr_non_printable(char *str)
{
	char		c;
	const char	hex[] = "0123456789abcdef";

	c = *str;
	while (c)
	{
		if (c >= ' ' && c <= '~')
		{
			ft_putchar(c);
		}
		else
		{
			ft_putchar('\\');
			c - '0' < 16 ? ft_putchar('0') : 0;
			ft_putnbr_base((unsigned char)c, hex);
		}
		c = *str++;
	}
}

void	ft_putnbr_base(int n, const char *base)
{
	int is_int_min;
	int len;

	len = ft_strlen(base);
	is_int_min = 0;
	if (!valid_base(base))
		return ;
	if (n < 0)
	{
		ft_putchar('-');
		if (n == MY_INT_MIN)
		{
			is_int_min = 1;
			n += 1;
		}
		n *= -1;
	}
	if (n < len)
		ft_putchar(base[n]);
	else
	{
		ft_putnbr_base(n / len, base);
		ft_putchar(base[n % len + is_int_min]);
	}
}

int		valid_base(const char *s)
{
	char *ss;

	while (*s)
	{
		if (*s == '-' || *s == '+')
		{
			return (0);
		}
		ss = (char *)s + 1;
		while (*ss)
		{
			if (*ss == *s)
			{
				return (0);
			}
			ss++;
		}
		++s;
	}
	return (1);
}

int		ft_strlen(const char *s)
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
