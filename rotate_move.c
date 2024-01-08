/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younesmoukhlij <younesmoukhlij@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:51:15 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/08 00:58:52 by younesmoukh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_move(t_stack_ps	**the_stack)
{
	t_stack_ps	*temp_head_1;
	t_stack_ps	*last_node;

	if (!the_stack || !*the_stack)
		return ;
	temp_head_1 = (*the_stack)->next;
	last_node = last_one_linked_list(*the_stack);
	last_node->next = (*the_stack);
	(*the_stack)->next = NULL;
	(*the_stack) = temp_head_1;
	fill_out_stack_position(the_stack);
}

void	rotate_a(t_stack_ps **stack_a)
{
	write(1, "ra\n", 3);
	rotate_move(stack_a);
}

void	rotate_b(t_stack_ps **stack_b)
{
	write(1, "rb\n", 3);
	rotate_move(stack_b);
}

void	rotate_stack_a_b(t_stack_ps **stack_a, t_stack_ps **stack_b)
{
	rotate_move(stack_b);
	rotate_move(stack_a);
	write(1, "rr\n", 3);
}
