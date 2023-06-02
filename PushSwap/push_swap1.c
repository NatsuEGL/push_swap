/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:06:39 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/02 20:03:33 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char *check_string(int ac,char **av)
{
	char	*s;
	int		i;

	i = 1;
	s = ft_strdup("");
	while (i < ac)
	{
		s = ft_strjoin(s, av[i]);
		s = ft_strjoin(s, " ");
		i++;
	}
	return (s);
}

int	check_signe(char c)
{	
	if (c == '-' || c == '+' || ft_isdigit(c))
		return (1);
	return (0);
}

int check_digit(char c)
{
	if (ft_isdigit(c) == 1)
		return (1);
	return (0);
}

int check_empty(char *av, char c)
{
	int a;
	
	a = 0;
	while (av[a])
	{
		if (av[a] != c)
			return(0);
		a++;
	}
	return (1);
}

// void    print_nodes(t_list *stack_a, t_list *stack_b, int size)
// {
//       printf("------Start-----\n");
//     while (size)
//     {
//         if (stack_a)
//         {
//             printf("%d , %d  , %d\t", stack_a->content , stack_a->position , stack_a->index);
//             stack_a = stack_a->next;
//         }
//         else
//         {
//             printf("                       |   \t");
//         }
//         if (stack_b)
//         {
//             printf("%d                 ", stack_b->content);
//             stack_b = stack_b->next;
//         }
//         size--;
//         printf("\n");
//     }
//     printf("-\t-\na\t                 b\n");
//     printf("------End-----\n");
// }

void    print_nodes(t_list *s)
{
    t_list    *current;

    current = s;
    while (current != NULL)
    {
        printf("[%d]         [%d]          [%d]\n", current ->content,current->index,current->position);
        current = current->next;
    }
}
 
int main(int ac, char **av)
{
	char	*p;
	char	**s;
	int		i;
	t_list *a;
	t_list *b;
	
	i = 0;
	if (!ac)
		return (0);
		b = NULL;
	p = check_string(ac, av);
	s = ft_split(p, 32);
	if (empty_check(&av[i]) != 1)
		return (0);
	if (the_signe(s) != 1)
		return (0);
	if (degit_check(s) != 1)
		return (0);
	loop(s);
	if (dublication(s) != 1)
		return (0);
	a = fill_stack(s);
	index_incremention(&a);
	ranking(&a);
	sorting_3(&a);
	print_nodes(a);
	return (0);
}
