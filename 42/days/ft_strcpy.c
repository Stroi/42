/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 00:49:56 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/11 18:53:58 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	char *head;

	head = dest;
	if (!(dest && src))
	{
		return (0);
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest++ = '\0';
	return (head);
}
