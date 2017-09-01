/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:34:21 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/12 17:45:29 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	if (str != 0)
	{
		while (*str != '\0')
		{
			ft_putchar(*str);
			++str;
		}
	}
}

int		main(int argc, char **argv)
{
	while (--argc > 0)
	{
		ft_putstr(argv[argc]);
		ft_putchar('\n');
	}
	return (0);
}
