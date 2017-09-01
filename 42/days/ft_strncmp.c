/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 02:25:54 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/11 22:29:51 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	const unsigned char *p1 = (const unsigned char *)s1;
	const unsigned char *p2 = (const unsigned char *)s2;
	unsigned char		c1;
	unsigned char		c2;

	c1 = *p1;
	c2 = *p2;
	while (c1 == c2 && c1 && n--)
	{
		c1 = (unsigned char)*p1++;
		c2 = (unsigned char)*p2++;
	}
	return (c1 - c2);
}
