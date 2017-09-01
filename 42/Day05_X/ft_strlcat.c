/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalta <jvalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 21:30:57 by jvalta            #+#    #+#             */
/*   Updated: 2017/08/15 22:27:42 by jvalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	while (src[i])
	{
		if (dest_size < size - 1)
			dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	dest[dest_size - 1] = '\0';
	return (dest_size);
}

int     main()
{
    char dest[10] = "Hello";
    printf("%s", ft_strlcat(dest, " Yellow", 9));
	printf("%s", ft_strlcat(dest, " Yellow", 9));
}