/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 11:34:43 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/07 22:28:54 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str);

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	while (str != NULL && str[i] != '\0')
	{
		i++;
	}
	i--;
	j = 0;
	while (j < i - j)
	{
		temp = str[j];
		str[j] = str[i - j];
		str[i - j] = temp;
		++j;
	}
}
