/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 22:10:16 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/18 23:27:58 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_wordtab(char **tab)
{
	unsigned	i;
	char		*tmp;

	i = 0;
	while (tab[i] && tab[i + 1])
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
		}
		i++;
	}
}
