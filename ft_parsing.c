/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:15:34 by youmoukh          #+#    #+#             */
/*   Updated: 2023/12/31 15:23:11 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_doubles(char **s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = i + 1;
		while (s[j])
		{
			if (ft_atoi(s[i]) == ft_atoi(s[j]))
				return (0);
			if (ft_atoi(s[i]) > INT_MAX || ft_atoi(s[i]) < INT_MIN)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	**ft_parsing(int ac, char **av)
{
	char	**string_arg;
	int		i;

	i = 1;
	string_arg = NULL;
	if (ac < 2)
		ft_error_mssg();
	if (ac >= 2)
	{
		while (i <= ac - 1)
		{
			if (ft_check_emptiness(av[i]) == 0)
				ft_error_mssg();
			i++;
		}
		string_arg = ft_split(ft_strjoin(ac, av + 1));
		if (ft_arguments_check(string_arg) == 0)
			ft_error_mssg();
		if (check_if_doubles(string_arg) == 0)
			ft_error_mssg();
	}
	return (string_arg);
}
