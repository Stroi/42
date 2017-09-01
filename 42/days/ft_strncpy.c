/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 01:16:41 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/11 22:11:28 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *head;

	head = dest;
	if (!(dest && src))
	{
		return (0);
	}
	while (*src && n-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	while (n-- > 0)
	{
		*dest++ = '\0';
	}
	return (head);
}
