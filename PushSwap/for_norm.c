/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_norm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 17:56:14 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/03 18:49:42 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int returning(char **av, char **s)
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

void arg(int ac ,t_list **a, t_list **b)
{
	if (ac == 6)
	{
		indexing(a);
		sorting_5(a,b);
		sorting_5(a,b);
		indexing(a);
		sorting_3(a);
		push_a(b, a);
		push_a(b, a);
	}
	else if (ac == 4)
	{
		indexing(a);
		sorting_3(a);
	}
	else if (ac == 5)
	{
		indexing(a);
		sorting_4(a,b);
		indexing(a);
		sorting_3(a);
		push_a(b, a);
	}
}
