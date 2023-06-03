/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instractions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 12:37:25 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/03 17:12:22 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_a(t_list **a, t_list **b)
{
	push(a,b);
	write(1, "pa\n", 3);
}

void push_b(t_list **b, t_list **a)
{
	push(b,a);
	write(1, "pb\n", 3);
}

void swap_a(t_list **a)
{
	swap_stacks(a);
	write(1, "sa\n", 3);
}

void swap_b(t_list **b)
{
	swap_stacks(b);
	write(1, "sb\n", 3);
}

void rotate_a(t_list **a)
{
	rotate_stacks(a);
	write(1, "ra\n", 3);
}
