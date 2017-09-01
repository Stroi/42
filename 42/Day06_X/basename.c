/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalta <jvalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 11:38:59 by jvalta            #+#    #+#             */
/*   Updated: 2017/08/16 15:00:02 by jvalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}


int     main(int argc, char *argv[])
{
    int i;
    char path[200];
    
    ft_strcpy(path, argv[0]);
    i = ft_strlen(path);
    while (i > 0 && path[i] != '/')
        i--;
    ft_putchar('.');
    while (path[i] != '\0')
	{
		ft_putchar(path[i]);
		i++;
	}  
    return (0);
}