/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 07:37:57 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/11 23:40:57 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MY_INT_MIN (~(~0u >> 1))

void	ft_putchar(char c);
void	ft_putnbr_base2(int n, char *base);
int		ft_strlen(char *s);
int		valid_base(char *s);
void	ft_putnbr_base(int n, char *base);

void	ft_putnbr_base(int n, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (n == 0 && len > 1)
		ft_putchar(*base);
	else if (len > 1)
		ft_putnbr_base2(n, base);
}

void	ft_putnbr_base2(int n, char *base)
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
		if ((unsigned)n == (unsigned)MY_INT_MIN)
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

int		valid_base(char *s)
{
	char *ss;

	while (*s)
	{
		if (*s == '-' || *s == '+')
		{
			return (0);
		}
		ss = s + 1;
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
