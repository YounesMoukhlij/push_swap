/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:51:18 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/10 19:34:21 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	swap_move(t_stack_ps **the_stack)
{
	t_stack_ps	*temp_stack;

	temp_stack = (*the_stack)->next;
	(*the_stack)->next = (*the_stack)->next->next;
	temp_stack->next = (*the_stack);
	*the_stack = temp_stack;
}

void	swap_a(t_stack_ps **stack_a)
{
	write(1, "sa\n", 3);
	swap_move(stack_a);
}

void	swap_b(t_stack_ps **stack_b)
{
	write(1, "sb\n", 3);
	swap_move(stack_b);
}

void	swap_stack_a_b(t_stack_ps **stack_a, t_stack_ps **stack_b)
{
	swap_move(stack_b);
	swap_move(stack_a);
	write(1, "ss\n", 3);
}
