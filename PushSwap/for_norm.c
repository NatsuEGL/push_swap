/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_norm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 17:56:14 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/05 14:56:19 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	else
		more_arg(s, a, b);
}

void	no_sort(t_list **s)
{
	t_list	*a;
	t_list	*b;

	a = (*s);
	b = (*s)->next;
	while (b)
	{
		if (a->index > b->index)
			return ;
		b = b->next;
		a = a->next;
	}
}

void	allocation(char **s, size_t i)
{
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

void	free_stacks(t_list **s)
{
	t_list	*tmp;

	tmp = *s;
	while (tmp != NULL)
	{
		tmp = (*s)->next;
		free(*s);
		*s = tmp;
	}
}
