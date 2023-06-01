/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 05:59:15 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/01 19:09:15 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_max_int(char *str)
{
	long	a;
	int		x;

	x = 0;
	a = ft_atoi(str);
	while (str[x] == '0')
		x++;
	if (a > INT_MAX || a < INT_MIN)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	else if (ft_strlen(str + x) > ft_strlen("+2147483647"))
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}

int degit_check(char **s)
{
	int i;
	int j;

	i = 0;
	while (s[i])
	{
		j=1;
		while (s[i][j])
		{
			if (!check_digit(s[i][j]))
			{
				write(2,"Error\n",6);
				exit(1);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int the_signe(char **s)
{
	int a;

	a = 0;
	if (s[a])
	{
		if (!check_signe(s[a][0]))
		{
			write(2,"Error\n",6);
			exit(1);
		}
		a++;
	}
	return (1);
}

int empty_check(char **s)
{
	int r;
	int m;

	r = 0;
	m = 0;
	while (s[r])
	{
		if (!s[r][m] || check_empty(s[r], ' '))
		{
			write(2,"Error : empty\n",14);
			exit(1);
		}
		r++;
	}
	return (1);
}

int dublication(char **s)
{
	int i;
	int j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while  (s[j])
		{
			if (ft_atoi(s[i]) == ft_atoi(s[j]) && i != j)
			{
				write(2,"Error : dublicate\n",18);
				exit(1);
			}
			j++;
		}
		i++;
	}
	return (1);
}
