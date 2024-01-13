/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_functions_2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 21:33:12 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/12 20:56:16 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

int	is_valid_move(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_strcmp(str[i], "sa") || ft_strcmp(str[i], "sb"))
			return (1);
		else if (ft_strcmp(str[i], "ss") || ft_strcmp(str[i], "rr"))
			return (1);
		else if (ft_strcmp(str[i], "ra") || ft_strcmp(str[i], "rb"))
			return (1);
		else if (ft_strcmp(str[i], "rra") || ft_strcmp(str[i], "rrb"))
			return (1);
		else if (ft_strcmp(str[i], "rrr") || ft_strcmp(str[i], "pb"))
			return (1);
		else if (ft_strcmp(str[i], "pa") || ft_strcmp(str[i], "pb"))
			return (1);
		else
			ft_error_mssg();
		i++;
	}
	return (0);
}

void	is_valid_before(char *str)
{
	if (!ft_strcmp(str, "sa\n") && !ft_strcmp(str, "sb\n")
		&& !ft_strcmp(str, "ss\n") && !ft_strcmp(str, "pa\n")
		&& !ft_strcmp(str, "pb\n") && !ft_strcmp(str, "ra\n")
		&& !ft_strcmp(str, "rb\n") && !ft_strcmp(str, "rr\n")
		&& !ft_strcmp(str, "rra\n") && !ft_strcmp(str, "rrb\n")
		&& !ft_strcmp(str, "rrr\n"))
	{
		ft_error_mssg();
	}
}

char	*main_helper(void)
{
	char	*str;
	char	*read_from_stdin;

	str = malloc(1);
	if (!str)
		return (free (str), NULL);
	str[0] = '\0';
	while (1)
	{
		read_from_stdin = get_next_line(0);
		if (!read_from_stdin)
		{
			free (read_from_stdin);
			break ;
		}
		is_valid_before(read_from_stdin);
		str = ft_str_join(str, read_from_stdin);
		if (!str)
			return (free (str), NULL);
	}
	return (str);
}
