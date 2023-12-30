/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:15:34 by youmoukh          #+#    #+#             */
/*   Updated: 2023/12/30 20:58:32 by youmoukh         ###   ########.fr       */
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

	i = 0;
	string_arg = NULL;
	if (ac < 2)
		ft_error_mssg();
	if (ac >= 2)
		string_arg = ft_split(ac, av);
	// if (ft_arguments_check(string_arg, ac) == 0)
	// 	ft_error_mssg();
	// if (check_if_doubles(string_arg) == 0)
	// 	ft_error_mssg();
	return (string_arg);
}
