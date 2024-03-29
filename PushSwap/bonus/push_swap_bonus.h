/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 07:57:45 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/18 13:09:12 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../libft/libft.h"

# include <stdio.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list
{
	int				content;
	int				index;
	int				position;
	struct s_list	*next;
}	t_list;

typedef struct s_var
{
	char	*str;
	int		i;
}	t_var;

//checker.c
char	*check_string(int ac, char **av);
int		check_signe(char c);
int		check_digit(char c);
int		check_empty(char *av, char c);
//parcing2_bonus.c
int		atoi_check(char **s);
int		checking_string(char *s, char c);
//parsing_bonus.c
void	check_max_min(char *str);
int		degit_check(char **s);
int		the_signe(char **s);
int		empty_check(char **s);
int		dublication(char **s);
//more_utils.c
int		loop(char **s);
t_list	*fill_stack(char **c);
void	ft_lstadd_front(t_list **lst, t_list *new);
//more_utils2.c
void	swap_stacks(t_list **stack);
void	rotate_stacks(t_list **stack);
void	rev_rotate(t_list **stack);
void	push(t_list **stack_a, t_list **stack_b);
//instractions.c
void	push_a(t_list **a, t_list **b);
void	push_b(t_list **a, t_list **b);
void	swap_a(t_list **a);
void	swap_b(t_list **b);
void	rotate_a(t_list **a);
//instractions2.c
void	rotate_b(t_list **b);
void	rrotate_a(t_list **a);
void	rrotate_b(t_list **b);
//sorting.c
void	indexing(t_list **s);
//for_norm.c
int		returning(char **av, char **s);
int		ft_strcmp(char *s1, char *s2);
//conditions.c
void	write_instractions(char *s, t_list **a, t_list **b);
void	allocation(char **s, size_t i);
void	free_stacks(t_list **stack);
int		no_sort(t_list *s);
void	more_write_in(char *s, t_list **a, t_list **b);
//free_func.c
void	free_all(t_list **a, t_list **b, char **s, t_var *h);
void	write_ok_ko(t_list *a, t_list *b);
void	next_line_read(t_var *h, t_list **a, t_list **b);
#endif