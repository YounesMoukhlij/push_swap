/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arguments_check.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:14:22 by youmoukh          #+#    #+#             */
/*   Updated: 2023/12/31 16:26:48 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_numbers(char *s)
{
	int	i;

	i = 0;
	if ((s[0] == '-' || s[0] == '+') && s[1] == '\0')
		return (0);
	if (ft_atoi(s) > INT_MAX || ft_atoi(s) < INT_MIN)
		return (0);
	while (s[i])
	{
		if (i == 0 && (s[i] == '-' || s[i] == '+'))
			i++;
		if (!(s[i] >= '0' && s[i] <= '9'))
		{
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_arguments_check(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i][0] == '\0')
			return (0);
		if (ft_check_numbers(s[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
