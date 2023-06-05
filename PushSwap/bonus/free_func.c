/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:16:15 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/05 14:32:54 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	free_all(t_list **a, t_list **b, char **s, t_var *h)
{
	h->i = 0;
	free(h->str);
	allocation(s, h->i);
	free(h);
	free_stacks(a);
	free_stacks(b);
}

void	write_ok_ko(t_list *a, t_list *b)
{
	if (no_sort(&a) == 1 || b)
		write(1, "OK\n", 3);
	else
		write (2, "KO\n", 3);
}

void	next_line_read(t_var *h, t_list **a, t_list **b)
{
	indexing(a);
	h->str = get_next_line(0);
	while (h->str)
	{
		write_instractions(h->str, a, b);
		free(h->str);
		h->str = get_next_line(0);
	}
}
