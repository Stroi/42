/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalta <jvalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 16:21:21 by jvalta            #+#    #+#             */
/*   Updated: 2017/08/16 16:13:19 by jvalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[n] = '\0';
	return (dest);
}


int     main()
{
    char dest[0];
    ft_strncpy(dest,"asdf",10);
    printf("%s\n", dest);
    ft_strncpy(dest,"fas",2);
    printf("%s\n", dest);
	
	char destx[0];
    strncpy(destx,"asdf",10);
    printf("%s\n", destx);
    strncpy(destx,"fas",2);
    printf("%s", destx);
    return 0;
}