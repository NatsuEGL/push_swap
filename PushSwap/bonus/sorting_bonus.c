/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 08:17:30 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/14 09:39:02 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	indexing(t_list **s)
{
	t_list	*a;
	t_list	*b;
	int		index;

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
