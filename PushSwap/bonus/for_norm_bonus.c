/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_norm_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 08:26:18 by akaabi            #+#    #+#             */
/*   Updated: 2023/06/18 22:03:03 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	returning(char **av, char **s)
{
	int		i;

	i = 0;
	if (empty_check(&av[i]) != 1)
		return (0);
	if (the_signe(s) != 1)
		return (0);
	if (degit_check(s) != 1)
		return (0);
	if (dublication(s) != 1)
		return (0);
	if (loop(s) != 1)
		return (0);
	if (!atoi_check(s))
		return (0);
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
