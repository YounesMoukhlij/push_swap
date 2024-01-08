/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_move.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younesmoukhlij <younesmoukhlij@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:51:12 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/08 00:55:33 by younesmoukh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_move(t_stack_ps	**the_stack)
{
	t_stack_ps	*tmp_head;

	if (!the_stack || !*the_stack)
		return ;
	tmp_head = last_one_linked_list(*the_stack);
	ft_beforelast(*the_stack)->next = NULL;
	tmp_head->next = *the_stack;
	*the_stack = tmp_head;
	fill_out_stack_position(the_stack);
}

void	reverse_rotate_a(t_stack_ps **stack_a)
{
	reverse_rotate_move(stack_a);
	write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_stack_ps **stack_b)
{
	reverse_rotate_move(stack_b);
	write(1, "rrb\n", 4);
}

void	reverse_rotate_a_b(t_stack_ps **stack_a, t_stack_ps **stack_b)
{
	reverse_rotate_move(stack_a);
	reverse_rotate_move(stack_b);
	write(1, "rrr\n", 4);
}
