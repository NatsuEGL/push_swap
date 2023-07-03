/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 12:48:01 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/19 11:10:50 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checking_string(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			return (0);
		i++;
	}
	return (1);
}

int	atoi_check(char **s)
{
	int	a;

	a = 0;
	while (s[a])
	{
		if (ft_atoi(s[a]) == 0 && (ft_strcmp(&s[a][0], "-0") == 0 \
		|| ft_strcmp(&s[a][0], "+0") == 0))
			return (1);
		if (ft_atoi(s[a]) == 0 && checking_string(s[a], '0') == 0)
		{
			write(2, "Error\n", 6);
			exit (1);
		}
		a++;
	}
	return (1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
