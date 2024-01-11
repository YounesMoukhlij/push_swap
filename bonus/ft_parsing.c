/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:15:34 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/11 17:48:44 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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

int	ft_check_emptiness(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] && s[i] != ' ')
			return (1);
		i++;
	}
	return (0);
}

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
			return (0);
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

char	**ft_parsing(int ac, char **av)
{
	char	**string_arg;
	char	*old_str;
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
		old_str = ft_strjoin(ac, av + 1);
		string_arg = ft_split(old_str, ' ');
		free (old_str);
		if (ft_arguments_check(string_arg) == 0)
			ft_error_mssg();
		if (check_if_doubles(string_arg) == 0)
			ft_error_mssg();
	}
	return (string_arg);
}
