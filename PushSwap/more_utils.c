/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:53:31 by akaabi            #+#    #+#             */
/*   Updated: 2023/05/31 15:11:56 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	llocation(char **s)
{
	int	t;

	t = 0;
	while (s[t])
	{
		free(s[t]);
		t++;
	}
	free(s);
}

t_list	*ft_lstneww(int s)
{
	t_list	*p;

	p = malloc(sizeof(t_list));
	if (!p)
		return (0);
	p -> content = s;
	// p -> index = 0;
	// p -> position = 0;
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

t_list	*push(char **c)
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
