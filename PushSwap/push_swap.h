/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:06:43 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/03 18:39:42 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

# include <stdio.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list
{
	int content;
	int index;
	int position;
	struct s_list *next;
} t_list;

//parsing.c
void	check_max_min(char *str);
int degit_check(char **s);
int the_signe(char **s);
int empty_check(char **s);
int dublication(char **s);
//push_swap1.c
char *check_string(int ac,char **av);
int	check_signe(char c);
int check_digit(char c);
int check_empty(char *av, char c);
//more_utils.c
int	loop(char **s);
t_list	*fill_stack(char **c);
void	ft_lstadd_front(t_list **lst, t_list *new);
//more_utils2.c
void swap_stacks(t_list **stack);
void rotate_stacks(t_list **stack);
void rev_rotate(t_list **stack);
void push(t_list **stack_a, t_list **stack_b);
//instractions.c
void push_a(t_list **a, t_list **b);
void push_b(t_list **a, t_list **b);
void swap_a(t_list **a);
void swap_b(t_list **b);
void rotate_a(t_list **a);
//instractions2.c
void rotate_b(t_list **b);
void rrotate_a(t_list **a);
void rrotate_b(t_list **b);
//sorting.c
int position_min(t_list **s, int *min);
int checking_min(t_list **s);
void sorting_3(t_list **s);
// void position_incremention(t_list **s);
void indexing(t_list **s);
//sorting2.c
void sorting_5(t_list **a, t_list **b);
int	ft_lstsize(t_list *lst);
void sorting_4(t_list **a, t_list **b);
//for_norm.c
int returning(char **av, char **s);
void arg(int ac ,t_list **a, t_list **b);
#endif