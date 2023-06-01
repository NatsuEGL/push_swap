/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 08:42:56 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/01 09:25:36 by akaabi           ###   ########.fr       */
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
	if ((*stack) != NULL)
	{
		t_list *first;
		t_list *last;

		first = (*stack);
		last = NULL;
		while (first->next != NULL)
		{
			first = first->next;
			first->next = last;
		}
		(*stack) = last;
	}
}