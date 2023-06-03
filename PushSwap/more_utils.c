/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:53:31 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/03 18:22:27 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int loop(char **s)
{
	int i;

	i = 0;
	while(s[i])
	{
		check_max_min(s[i]);
		i++;
	}
	return (1);
}

t_list	*ft_lstneww(int s)
{
	t_list	*p;

	p = malloc(sizeof(t_list));
	if (!p)
		return (0);
	p -> content = s;
	// p -> index = 0;
	p -> position = 0;
	p -> next = NULL;
	return (p);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;
	
	p = *lst;
	if (p)
	{
		while (p->next)
			p = p -> next;
		p->next = new;
	}
	else
		*lst = new;
}

t_list	*fill_stack(char **c)
{
	t_list *n;
	t_list *s;
	int i;

	i = 0;
	s =	NULL;
	while (c[i])
	{
		n = ft_lstneww(ft_atoi(c[i]));
		ft_lstadd_back(&s, n);
		i++;
	}
	return (s);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
