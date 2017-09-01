/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 02:03:10 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/11 22:14:54 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2);

int		ft_strcmp(char *s1, char *s2)
{
	const unsigned char		*p1 = (const unsigned char *)s1;
	const unsigned char		*p2 = (const unsigned char *)s2;
	unsigned char			c1;
	unsigned char			c2;

	c1 = *p1;
	c2 = *p2;
	while (c1 == c2 && c1)
	{
		c1 = (unsigned char)*p1++;
		c2 = (unsigned char)*p2++;
	}
	return (c1 - c2);
}
