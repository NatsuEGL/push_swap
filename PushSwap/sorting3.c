/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:31:06 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/04 16:38:02 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int checking_max(t_list **s)
{
    int max;
    t_list *current;

	max = (*s)->index;
	current = (*s)->next;
    while (current != NULL)
    {
        if (current->index > max)
            max = current->index;
        current = current->next;
    }
    return (max);
}

int position_max(t_list **s , int *max)
{
	int i;
    int position;
    t_list *current;

	*max = checking_max(s);
	position = 0;
	i = 1;
	current = *s;
    while (current != NULL)
    {	
		if (current->index == *max)
			position = i;
        current = current->next;
        i++;
    }
	return (position);
}

void push_bzaf(t_list **a, t_list **b)
{
	int x;
	int y;

	x = 0;
	y = 10;
	if (ft_lstsize(*a) > 100)
		y = 21;
	while (*a)
	{
		if ((*a)->index <= x)
		{
			push_b(a, b);
			x++;
		}
		else if ((*a)->index <= (x + y))
		{
			push_b(a, b);
			rotate_b(b);
			x++;
		}
		else 
			rotate_a(a);
	}
}

void sorting_bzaf(t_list **a, t_list **b)
{
	int max;

	max = 0;
	push_bzaf(a, b);
	sorting_bzaff(a ,b);
	split_and_push(a,b);
}

void sorting_bzaff(t_list **a, t_list **b)
{
	int position;
	int max;
	
	max = 0;
	while (*b)
	{
		position = position_max(b, &max);
		if (position <= ft_lstsize(*b) / 2)
		{
			while ((*b)->index != max)
				rotate_b(b);
			push_a(b, a);
		}
		else
		{
			while ((*b)->index != max)
					rrotate_b(b);
			push_a(b, a);
		}
	}
}

void split_and_push(t_list **a, t_list **b)
{
	int max_index = -1;
	int max_minus_one_index = -1;
	int size;

	size = ft_lstsize(*b);

	t_list *current = *b;
	while (current)
	{
		if (current->index > max_index)
		{
			max_minus_one_index = max_index;
			max_index = current->index;
		}
		else if (current->index > max_minus_one_index)
		{
			max_minus_one_index = current->index;
		}
		current = current->next;
	}

	while (size > 0)
	{
		if ((*b)->index == max_index || (*b)->index == max_minus_one_index)
		{
			push_a(b, a);
			size--;
		}
		else
		{
			rotate_b(b);
			size--;
		}
	}

	if ((*a)->index == max_minus_one_index && (*a)->next->index == max_index)
		swap_a(a);
}
