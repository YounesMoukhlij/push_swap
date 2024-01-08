/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:34:22 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/08 13:56:02 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_move_b(t_stack_ps **stack_a, t_stack_ps **stack_b)
{
	t_stack_ps	*tmp_stack;

	tmp_stack = (*stack_a);
	(*stack_a) = (*stack_a)->next;
	add_front_linked_list(stack_b, tmp_stack);
	write(1, "pb\n", 3);
	fill_out_stack_position(stack_b);
	fill_out_stack_position(stack_a);
	fill_moves(stack_a);
	fill_moves(stack_b);
}

void	push_move_a(t_stack_ps **stack_a, t_stack_ps **stack_b)
{
	t_stack_ps	*tmp_stack;

	tmp_stack = *stack_b;
	*stack_b = (*stack_b)->next;
	add_front_linked_list(stack_a, tmp_stack);
	write(1, "pa\n", 3);
	fill_out_stack_position(stack_a);
	fill_out_stack_position(stack_b);
	fill_moves(stack_a);
	fill_moves(stack_b);
}
