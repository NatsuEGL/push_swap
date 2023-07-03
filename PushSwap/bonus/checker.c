/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 07:56:28 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/18 21:46:01 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

char	*check_string(int ac, char **av)
{
	char	*s;
	int		i;

	i = 1;
	s = ft_strdup("");
	while (i < ac)
	{
		s = ft_strjoin(s, av[i]);
		s = ft_strjoin(s, " ");
		i++;
	}
	return (s);
}

int	check_signe(char c)
{	
	if (c == '-' || c == '+' || ft_isdigit(c))
		return (1);
	return (0);
}

int	check_digit(char c)
{
	if (ft_isdigit(c) == 1)
		return (1);
	return (0);
}

int	check_empty(char *av, char c)
{
	int	a;

	a = 0;
	while (av[a])
	{
		if (av[a] != c)
			return (0);
		a++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	char	*p;
	t_var	*h;
	char	**s;
	t_list	*a;
	t_list	*b;

	if (ac < 2)
		return (0);
	h = malloc(sizeof(t_var));
	if (!h)
		return (0);
	b = NULL;
	p = check_string(ac, av);
	s = ft_split(p, 32);
	free(p);
	if (returning(av, s) != 1)
		return (0);
	a = fill_stack(s);
	next_line_read(h, &a, &b);
	write_ok_ko(a, b);
	free_all(&a, &b, s, h);
	return (0);
}
