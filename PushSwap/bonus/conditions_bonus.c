/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 08:01:19 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/05 14:46:42 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	write_instractions(char *s, t_list **a, t_list **b)
{
	if (ft_strcmp(s, "ra\n") == 0)
		rotate_a(a);
	else if (ft_strcmp(s, "rb\n") == 0)
		rotate_b(b);
	else if (ft_strcmp(s, "sa\n") == 0)
		swap_a(a);
	else if (ft_strcmp(s, "sb\n") == 0)
		swap_b(b);
	else if (ft_strcmp(s, "pa\n") == 0)
		push_a(b, a);
	else if (ft_strcmp(s, "pb\n") == 0)
		push_b(a, b);
	else
		more_write_in(s, a, b);
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

int	no_sort(t_list **s)
{
	t_list	*a;
	t_list	*b;

	a = (*s);
	b = (*s)->next;
	while (b)
	{
		if (a->index > b->index)
			return (0);
		b = b->next;
		a = a->next;
	}
	return (1);
}

void	more_write_in(char *s, t_list **a, t_list **b)
{
	if (ft_strcmp(s, "ss\n") == 0)
	{
		swap_a(a);
		swap_b(b);
	}
	else if (ft_strcmp(s, "rrr\n") == 0)
	{
		rrotate_a(a);
		rrotate_b(b);
	}
	else if (ft_strcmp(s, "rra\n") == 0)
		rrotate_a(a);
	else if (ft_strcmp(s, "rrb\n") == 0)
		rrotate_b(b);
	else if (ft_strcmp(s, "rr\n") == 0)
	{
		rotate_a(a);
		rotate_b(b);
	}
	else
		write(2, "Error \n", 6);
}
