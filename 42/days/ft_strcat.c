/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:37:18 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/11 06:41:10 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	char *head;

	head = dest;
	while (*dest)
	{
		++dest;
	}
	while (*src)
	{
		*dest = *src;
		++dest;
		++src;
	}
	*dest = '\0';
	return (head);
}
