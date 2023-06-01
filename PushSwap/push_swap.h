/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:06:43 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/01 09:25:13 by akaabi           ###   ########.fr       */
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
t_list	*push(char **c);
int	ft_lstsize(t_list *lst);
void swap_stacks(t_list **stack);
void rotate_stacks(t_list **stack);
#endif