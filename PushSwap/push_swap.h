/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:06:43 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/01 18:16:05 by akaabi           ###   ########.fr       */
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

void	check_max_int(char *str);

void	if_atoi(char **s);
int degit_check(char **s);
int the_signe(char **s);
char *check_string(int ac,char **av);
int	check_signe(char c);
int check_digit(char c);
int check_empty(char *av, char c);
int empty_check(char **s);
int dublication(char **s);
void	llocation(char **s);
t_list	*fill_stack(char **c);
void swap_stacks(t_list **stack);
void rotate_stacks(t_list **stack);
void rev_rotate(t_list **stack);
void	ft_lstadd_front(t_list **lst, t_list *new);
void push(t_list **stack_a, t_list **stack_b);
#endif