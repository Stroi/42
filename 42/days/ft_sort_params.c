/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:49:03 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/13 15:30:39 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_cstr_arr(char **cstr_arr, unsigned n);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc > 1)
		ft_sort_cstr_arr(argv + 1, argc - 1);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		++i;
	}
	return (0);
}

void	ft_sort_cstr_arr(char **cstr_arr, unsigned n)
{
	unsigned	i;
	int			sz_diff;
	int			diff;
	int			done;
	char		*temp;

	i = 0;
	done = 1;
	while (i + 1 < n)
	{
		sz_diff = ft_strlen(cstr_arr[i]) - ft_strlen(cstr_arr[i + 1]);
		diff = ft_strcmp(cstr_arr[i], cstr_arr[i + 1]);
		if (diff > 0 || (diff == 0 && sz_diff))
		{
			done = 0;
			temp = cstr_arr[i];
			cstr_arr[i] = cstr_arr[i + 1];
			cstr_arr[i + 1] = temp;
		}
		i++;
	}
	if (!done)
		ft_sort_cstr_arr(cstr_arr, n);
}

int		ft_strcmp(char *s1, char *s2)
{
	unsigned char			c1;
	unsigned char			c2;

	if (s1 == 0 || s2 == 0)
		return (0);
	c1 = *s1;
	c2 = *s2;
	while (c1 == c2 && c1)
	{
		c1 = (unsigned char)*s1++;
		c2 = (unsigned char)*s2++;
	}
	return (c1 - c2);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	if (str != 0)
	{
		while (str[i] != '\0')
		{
			i++;
		}
	}
	return (i);
}

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
