/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:06:39 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/01 09:25:20 by akaabi           ###   ########.fr       */
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
void    print_nodes(t_list *arg)
{
    t_list    *current;

    current = arg;
    while (current != NULL)
    {
        printf("[%d]\n", current->content);
        current = current->next;
    }
}

int main(int ac, char **av)
{
	char	*p;
	char	**s;
	int		i;
	t_list *a;
	
	i = 0;
	if (!ac)
		return (0);
	p = check_string(ac, av);
	s = ft_split(p, 32);
	free(p);
	if (empty_check(&av[i]) != 1)
		return (0);
	if (the_signe(s) != 1)
		return (0);
	if (degit_check(s) != 1)
		return (0);
	if (dublication(s) != 1)
		return (0);
	if_atoi(s);
	a = push(s);
	print_nodes(a);
	rotate_stacks(&a);
	printf("---------------\n");
	print_nodes(a);
	llocation(s);
	return (0);
}
