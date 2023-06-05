/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instractions_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 08:14:40 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/05 12:57:28 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	push_a(t_list **a, t_list **b)
{
	push(a, b);
}

void	push_b(t_list **b, t_list **a)
{
	push(b, a);
}

void	swap_a(t_list **a)
{
	swap_stacks(a);
}

void	swap_b(t_list **b)
{
	swap_stacks(b);
}

void	rotate_a(t_list **a)
{
	rotate_stacks(a);
}
