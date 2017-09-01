/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fy_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalta <jvalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 23:33:46 by jvalta            #+#    #+#             */
/*   Updated: 2017/08/13 20:10:24 by jvalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char     *strlen(char *str)
{
        int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
    return i;
}

char    *ft_strrev(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

    char *start;
    char *end;
    
    start = str;
    end = start + i - 1;
    while(end > start)
    {
        char temp;
        
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    return str;

}

int     main()
{
    char str[] = "ASDF";
    ft_strrev(str);
    printf("%s", str);
    printf("%d", strlen(str));
    return 0;
}