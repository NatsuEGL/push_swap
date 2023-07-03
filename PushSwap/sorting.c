/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:39:33 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/16 11:43:20 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checking_min(t_list **s)
{
	int		min;
	t_list	*current;

	min = (*s)->index;
	current = (*s)->next;
	while (current != NULL)
	{
		if (current->index < min)
		min = current->index;
		current = current->next;
	}
	return (min);
}

int	position_min(t_list **s, int *min)
{
	int		i;
	int		position;
	t_list	*current;

	*min = checking_min(s);
	position = 0;
	i = 1;
	current = *s;
	while (current != NULL)
	{	
		if (current->index == *min)
			position = i;
		current = current->next;
		i++;
	}
	return (position);
}

void	sorting_3(t_list **s)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;

	a = (*s);
	b = (*s)->next;
	c = (*s)->next->next;
	if (a->index == 2 && b->index == 0 && c->index == 1)
		rotate_a(s);
	else if (a->index == 1 && b->index == 0 && c->index == 2)
		swap_a(s);
	else if (a->index == 2 && b->index == 1 && c->index == 0)
	{
		swap_a(s);
		rrotate_a(s);
	}
	else if (a->index == 0 && b->index == 2 && c->index == 1)
	{
		swap_a(s);
		rotate_a(s);
	}
	else if (a->index == 0 && b->index == 1 && c->index == 2)
		return ;
	else
		rrotate_a(s);
}

void	indexing(t_list **s)
{
	t_list	*a;
	t_list	*b;
	int		index;

	a = (*s);
	while (a != NULL)
	{
		b = (*s);
		index = 0;
		while (b != NULL)
		{
			if (a->content > b->content)
				index++;
			a->index = index;
			b = b->next;
		}
		a = a->next;
	}
}
