/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 08:42:56 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/06 16:38:52 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_stacks(t_list **stack)
{
	t_list	*first;
	t_list	*second;

	if ((*stack) != NULL && (*stack)->next != NULL)
	{
		first = (*stack);
		second = (*stack)->next;
		first->next = second->next;
		second->next = first;
		(*stack) = second;
	}	
}

void	rotate_stacks(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	if ((*stack) != NULL && (*stack)->next != NULL)
	{
		first = (*stack);
		last = (*stack);
		while (last->next != NULL)
			last = last->next;
		last->next = first;
		(*stack) = first->next;
		first->next = NULL;
	}
}

void	rev_rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	if ((*stack) != NULL && (*stack)->next != NULL)
	{
		first = (*stack);
		last = (*stack);
		while (first->next != NULL)
			first = first->next;
		while (last->next != first)
			last = last->next;
		last->next = NULL;
		first->next = (*stack);
		(*stack) = first;
	}
}

void	push(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if ((*stack_a) != NULL)
	{
		tmp = (*stack_a);
		(*stack_a) = (*stack_a)->next;
		ft_lstadd_front(&(*stack_b), tmp);
	}
}
