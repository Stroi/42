/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 23:15:17 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/28 01:01:04 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		count(int value)
{
	int		count;

	count = value < 0 ? 1 : 0;
	while (value)
	{
		count++;
		value /= 10;
	}
	return (count);
}

int		count_base(unsigned value, unsigned base)
{
	int		count;

	count = 0;
	while (value)
	{
		count++;
		value /= base;
	}
	return (count);
}

int		ft_strlen(char *str)
{
	char	*head;

	head = str;
	while (*str)
		str++;
	return (str - head);
}

void	ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = ft_strlen(str) - 1;
	tmp = '\0';
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
}

void	ft_storeintmin(char *str)
{
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = '\0';
}

char	*ft_itoa(int value)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(count(value));
	if (value == -2147483648)
	{
		ft_storeintmin(str);
		return (str);
	}
	else if (value < 0)
	{
		value = -value;
		str[i] = '-';
		i++;
	}
	while (value)
	{
		str[i] = value % 10 + '0';
		value /= 10;
		i++;
	}
	ft_strrev(str[0] == '-' ? str + 1 : str);
	return (str);
}

char	*ft_itoa_base(int value, int base)
{
	int			i;
	unsigned	uval;
	char		*str;
	const char	*dig = "0123456789ABCDEF";

	if (base == 10)
		return (ft_itoa(value));
	i = 0;
	uval = (unsigned)value;
	str = malloc(count_base(uval, (unsigned)base));
	while (uval)
	{
		str[i] = dig[uval % base];
		uval /= base;
		i++;
	}
	ft_strrev(str);
	return (str);
}

int		main(int argc, char **argv)
{
	char	*str;

	str = ft_itoa_base(atoi(argv[1]), atoi(argv[2]));
	printf("Res: %s\n", str);
	free(str);
	return (0);
}
