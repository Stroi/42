/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalta <jvalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 19:14:47 by jvalta            #+#    #+#             */
/*   Updated: 2017/08/16 18:25:02 by jvalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (s1[i] > s2[i] || s1[i] < s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}

int main()
{
        printf("%d\n", ft_strcmp("bcd", "bCd"));
		printf("%d", strcmp("bcd", "bCd"));
}
