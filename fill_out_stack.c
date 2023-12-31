/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_out_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 16:49:11 by youmoukh          #+#    #+#             */
/*   Updated: 2023/12/31 19:59:20 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_out_stack(char **string_arg, t_stack_ps **stack_a)
{
	int			i;
	t_stack_ps	*current;

	i = 0;
	while (string_arg[i])
	{
		current = new_linked_list(ft_atoi(string_arg[i]));
		if (!*stack_a)
			add_front_linked_list(stack_a, current);
		else
			add_back_linked_list(current, stack_a);
		i++;
	}
}
