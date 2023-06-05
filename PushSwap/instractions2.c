/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instractions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 12:42:23 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/05 12:49:51 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_b(t_list **b)
{
	rotate_stacks(b);
	write(1, "rb\n", 3);
}

void	rrotate_a(t_list **a)
{
	rev_rotate(a);
	write(1, "rra\n", 4);
}

void	rrotate_b(t_list **b)
{
	rev_rotate(b);
	write(1, "rrb\n", 4);
}
