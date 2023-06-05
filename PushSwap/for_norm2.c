/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_norm2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:12:17 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/05 13:15:01 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	more_arg(char **s, t_list **a, t_list **b)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if (i == 4)
	{
		indexing(a);
		sorting_4(a, b);
		indexing(a);
		sorting_3(a);
		push_a(b, a);
	}
	else
	{
		indexing(a);
		sorting_bzaf(a, b);
	}
}
