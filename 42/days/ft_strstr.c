/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 01:51:04 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/11 04:12:00 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if (!(str && to_find))
	{
		return (0);
	}
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
		{
			++j;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		++i;
	}
	return (0);
}
