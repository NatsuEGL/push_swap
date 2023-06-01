/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 08:42:56 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/01 19:02:25 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_stacks(t_list **stack)
{
	if ((*stack) != NULL && (*stack)->next != NULL)
	{
		t_list *first;
		t_list *second;
	
		first = (*stack);
		second = (*stack)->next;
	
		first->next = second->next;
		second->next = first;
		(*stack) = second;
	}	
}

void rotate_stacks(t_list **stack)
{
	if ((*stack) != NULL && (*stack)->next != NULL) 
	{
		t_list *first;
		t_list *last;

		first = (*stack);
		last = (*stack);
		while (last->next != NULL)
			last = last->next;
		last->next = first;
        (*stack) = first->next;
        first->next = NULL;
	}
}

void rev_rotate(t_list **stack)
{
	if ((*stack) != NULL && (*stack)->next != NULL)
	{
		t_list *first;
		t_list *last;

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

void push(t_list **stack_a, t_list **stack_b, char *str)
{
	if ((*stack_a) != NULL)
	{
		t_list *tmp;	
		tmp = (*stack_a);

		(*stack_a) = (*stack_a)->next;
		ft_lstadd_front(&(*stack_b),tmp);
		ft_putstr(str);
	}
}
