/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_move_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:51:15 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/16 22:11:22 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rotate_move(t_stack_ps	**the_stack)
{
	t_stack_ps	*temp_head_1;
	t_stack_ps	*last_node;

	if (!the_stack || !*the_stack)
		return ;
	if (size_linked_list(the_stack) == 1)
		return ;
	temp_head_1 = (*the_stack)->next;
	last_node = last_one_linked_list(*the_stack);
	last_node->next = (*the_stack);
	(*the_stack)->next = NULL;
	(*the_stack) = temp_head_1;
}

void	rotate_a(t_stack_ps **stack_a)
{
	rotate_move(stack_a);
}

void	rotate_b(t_stack_ps **stack_b)
{
	rotate_move(stack_b);
}

void	rotate_stack_a_b(t_stack_ps **stack_a, t_stack_ps **stack_b)
{
	rotate_move(stack_b);
	rotate_move(stack_a);
}
