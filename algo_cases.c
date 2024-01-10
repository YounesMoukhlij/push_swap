/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_cases.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:23:23 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/10 12:23:51 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_1(t_stack_ps **s_b, t_stack_ps **s_a, t_stack_ps *b_n)
{
	while (b_n->position != 0)
		reverse_rotate_b(s_b);
	while (b_n->target_node->position != 0)
		rotate_a(s_a);
	if (b_n->position == 0 && b_n->target_node->position == 0)
	{
		push_move_a(s_a, s_b);
		set_connection_a_b(s_a, s_b);
	}
}

void	case_2(t_stack_ps **s_b, t_stack_ps **s_a, t_stack_ps *b_n)
{
	while (b_n->position != 0)
		rotate_b(s_b);
	while (b_n->target_node->position != 0)
		reverse_rotate_a(s_a);
	if (b_n->position == 0 && b_n->target_node->position == 0)
	{
		push_move_a(s_a, s_b);
		set_connection_a_b(s_a, s_b);
	}
}

void	case_3(t_stack_ps **s_b, t_stack_ps **s_a, t_stack_ps *b_n)
{
	while (b_n->position != 0)
		rotate_b(s_b);
	while (b_n->target_node->position != 0)
		rotate_a(s_a);
	if (b_n->position == 0 && b_n->target_node->position == 0)
	{
		push_move_a(s_a, s_b);
		set_connection_a_b(s_a, s_b);
	}
}

void	case_4(t_stack_ps **s_b, t_stack_ps **s_a, t_stack_ps *b_n)
{
	while (b_n->position != 0)
		reverse_rotate_b(s_b);
	while (b_n->target_node->position != 0)
		reverse_rotate_a(s_a);
	if (b_n->position == 0 && b_n->target_node->position == 0)
	{
		push_move_a(s_a, s_b);
		set_connection_a_b(s_a, s_b);
	}
}
