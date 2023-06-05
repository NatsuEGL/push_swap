/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_norm_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 08:26:18 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/05 14:37:21 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	returning(char **av, char **s)
{
	int		i;

	i = 0;
	if (empty_check(&av[i]) != 1)
		return (0);
	if (the_signe(s) != 1)
		return (0);
	if (degit_check(s) != 1)
		return (0);
	if (dublication(s) != 1)
		return (0);
	if (loop(s) != 1)
		return (0);
	return (1);
}

void	arg(char **s, t_list **a, t_list **b)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if (i == 5)
	{
		indexing(a);
		sorting_5(a, b);
		sorting_5(a, b);
		indexing(a);
		sorting_3(a);
		push_a(b, a);
		push_a(b, a);
	}
	else if (i == 3)
	{
		indexing(a);
		sorting_3(a);
	}
	else if (i == 4)
		more_args(s, a, b);
}

void	more_args(char **s, t_list **a, t_list **b)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if (i == 4)
	{
		indexing(a);
		sorting_4(a, b);
		indexing(a);
		sorting_3(a);
		push_a(b, a);
	}
	else
	{
		indexing(a);
		sorting_bzaf(a, b);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
