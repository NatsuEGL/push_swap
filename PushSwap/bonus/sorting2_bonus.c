/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting2_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 08:18:25 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/05 13:03:52 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sorting_5(t_list **a, t_list **b)
{
	int		position;
	int		min;

	min = 0;
	position = position_min(a, &min);
	if (position <= ft_lstsize(*a) / 2 + 1)
	{
		while ((*a)->index != min)
			rotate_a(a);
		push_b(a, b);
	}
	else
	{
		while ((*a)->index != min)
			rrotate_a(a);
		push_b(a, b);
	}
}

void	sorting_4(t_list **a, t_list **b)
{
	int	position;
	int	min;

	min = 0;
	position = position_min(a, &min);
	if (position <= ft_lstsize(*a) / 2)
	{
		while ((*a)->index != min)
			rotate_a(a);
		push_b(a, b);
	}
	else if (position > ft_lstsize(*a) / 2)
	{
		while ((*a)->index != min)
			rrotate_a(a);
		push_b(a, b);
	}
}

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*ptr;

	count = 0;
	if (lst == NULL)
		return (0);
	ptr = lst;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
