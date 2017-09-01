/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalta <jvalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 21:39:55 by jvalta            #+#    #+#             */
/*   Updated: 2017/08/16 11:21:53 by jvalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_char(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		is_low(char c)
{
	if (c <= 122 && c >= 97)
		return (1);
	return (0);
}

int		not_low(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (is_char(str[i]))
		{
			if (not_low(str[i]))
				k++;
			if (is_low(str[i]) && k == 0)
			{
				str[i] = str[i] - 32;
				k++;
			}
			i++;
		}
		else
		{
			i++;
			k = 0;
		}
	}
	return (str);
}



int     main()
{
    char srt[] = "Salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s", ft_strcapitalize(srt));
}