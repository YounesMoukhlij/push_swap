/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arguments_check.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younesmoukhlij <younesmoukhlij@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:14:22 by youmoukh          #+#    #+#             */
/*   Updated: 2023/12/30 23:55:23 by younesmoukh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_deeply_string(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		// if (check_if_empty(s) == 0)
		// 	return (0);
		if ((s[i] == '-' || s[i] == '+') && s[i + 1] == '\0')
			return (0);
		i++;
	}
	return (0);
}

int	ft_arguments_check(char **s, int ac)
{
	int	j;

	j = 1;
	while (j < ac)
	{
		if (check_deeply_string(s[j]) == 0)
			return (0);
		if (ft_atoi(s[j]) > INT_MAX || ft_atoi(s[j]) < INT_MIN)
			return (0);
		j++;
	}
	return (1);
}
