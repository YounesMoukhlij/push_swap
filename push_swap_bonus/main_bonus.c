/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:13:41 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/13 14:56:14 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int ac, char **av)
{
	char		**string_arg;
	char		**string_move;
	char		*str;
	t_stack_ps	*s_a;
	t_stack_ps	*s_b;

	if (ac == 1)
		return (0);
	string_arg = ft_parsing(ac, av);
	fill_out_stack(string_arg, &s_a);
	str = main_helper();
	if (!str)
		return (1);
	string_move = ft_split(str, '\n');
	free (str);
	if (is_valid_move(string_move) == 1)
		check_entred_moves(string_move, &s_a, &s_b);
	finish_st(string_arg, &s_a, string_move, &s_b);
	return (0);
}
