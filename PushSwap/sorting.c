/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:39:33 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/02 20:00:26 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int checking_max(t_list *s)
// {
//     int max;
//     t_list *current;

// 	max = s->content;
// 	current = s->next;
//     while (current != NULL)
//     {
//         if (current->content > max)
//             max = current->content;
//         current = current->next;
//     }

//     return (max);
// }

// int position_max(t_list **s)
// {
//     int max;
//     int position;
//     t_list *current;

// 	max = checking_max(*s);
//     if (max == 0)
//         return 0;
// 	position = 1;
// 	current = *s;
//     while (current != NULL)
//     {
//         if (current->content == max)
//             current->position = position;
//         else
//             current->position = 0;

//         position++;
//         current = current->next;
//     }
// 	return (position);
// }

void sorting_3(t_list **s)
{
	t_list *a;
	t_list *b;
	t_list *c;
	
	a = (*s);
	b = (*s)->next;
	c = (*s)->next->next;
	if (a->index== 2)
	{
		if (b->index == 1)
		{
			swap_a(s);
			rotate_a(s);
		}
		else
		{
			rrotate_a(s);
			swap_a(s);
		}
	}
	else if (b->index == 2)
	{
		if (a->index == 1)
			rrotate_a(s);
		else
		{
			rrotate_a(s);
			swap_a(s);
		}

	}
	else if (c->index== 2)
		swap_a(s);
}


void index_incremention(t_list **s)
{
	t_list *current;
	int position;

	current = *s;
	position = 1;
	while (current != NULL)
	{
		current->position = position;
		position++;
		current = current->next;
	}
}

void ranking(t_list **s)
{
	t_list *a;
	t_list *b;
	int index;

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
