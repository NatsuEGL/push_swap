/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instractions2_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 08:15:15 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/05 12:57:39 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rotate_b(t_list **b)
{
	rotate_stacks(b);
}

void	rrotate_a(t_list **a)
{
	rev_rotate(a);
}

void	rrotate_b(t_list **b)
{
	rev_rotate(b);
}
