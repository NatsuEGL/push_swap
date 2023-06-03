/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:06:39 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/03 19:01:17 by akaabi           ###   ########.fr       */
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
	
//       printf("----------------------Start-------------------\n");
// 	  printf("[content]           [position]           [index]\n");
//     while (size)
//     {
//         if (stack_a)
//         {
//             printf("[%d]   , [%d]  ,   [%d]\t", stack_a->content , stack_a->position , stack_a->index);
//             stack_a = stack_a->next;
//         }
//         else
//         {
//             printf("                       |                \t");
//         }
//         if (stack_b)
//         {
//             printf("[%d]   , [%d]  ,   [%d]\t", stack_b->content , stack_b->position , stack_b->index);
//             stack_b = stack_b->next;
//         }
//         size--;
//         printf("\n");
//     }
//     printf("a\t                 b\n");
//     printf("----------------------End-------------------------\n");
// }

 void    print_nodes(t_list *stack_a, t_list *stack_b, int size)
{
    printf("------Start-----\n");
    while (size)
    {
        if (stack_a)
        {
            printf("%d\t", stack_a->content);
            stack_a = stack_a->next;
        }
        else
        {
            printf("  |   \t");
        }
        if (stack_b)
        {
            printf("%d", stack_b->content);
            stack_b = stack_b->next;
        }
        size--;
        printf("\n");
    }
    printf("-\t-\na\tb\n");
    printf("------End-----\n");
}

// void    print_nodes(t_list *s , t_list *a)
// {
//     t_list    *current;

//     current = s;
//     while (current != NULL)
//     {
//         printf("[%d]         [%d]\n", current ->content,a->content);
//         current = current->next;
//         a = ->next;
//     }
// }
 
int main(int ac, char **av)
{
	char	*p;
	char	**s;
	t_list *a;
	t_list *b;
	
	if (!ac)
		return (0);
	b = NULL;
	p = check_string(ac, av);
	s = ft_split(p, 32);
	if (returning(av,s) != 1)
		return (0);
	a = fill_stack(s);
	arg(ac,&a,&b);
	print_nodes(a, b,5);
	return (0);
}
