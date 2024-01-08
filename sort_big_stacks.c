/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stacks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:45:54 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/08 20:35:41 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	final_sort(t_stack_ps **stack_a)
{
	int			size_a;
	t_stack_ps	*tmp;

	size_a = size_linked_list(*stack_a);
	tmp = find_min_node(stack_a);
	while (size_a--)
	{
		if (tmp->position != 0)
		{
			if (tmp->position <= size_a / 2)
			{
				while (tmp->position != 0)
					rotate_a(stack_a);
			}
			if (tmp->position >= size_a / 2)
			{
				while (tmp->position != 0)
					reverse_rotate_a(stack_a);
			}
		}
	}
}

void	check_best_move(t_stack_ps **stack_b, t_stack_ps **stack_a)
{
	t_stack_ps	*b_n;
	int			s;
	int			sz_a;
	int			sz_b;

	b_n = gest_best_move(stack_b);
	sz_b = size_linked_list(*stack_b);
	sz_a = size_linked_list(*stack_a);
	s = sz_b;
	while (s--)
	{
		if (b_n->position > (sz_b / 2)
			&& b_n->target_node->position > (sz_a / 2))
			case_4(stack_b, stack_a, b_n);
		else if (b_n->position < (sz_b / 2)
			&& b_n->target_node->position > (sz_a / 2))
			case_2(stack_b, stack_a, b_n);
		else if (b_n->position < (sz_b / 2)
			&& b_n->target_node->position < (sz_a / 2))
			case_3(stack_b, stack_a, b_n);
		else if (b_n->position > (sz_b / 2)
			&& b_n->target_node->position < (sz_a / 2))
			case_1(stack_b, stack_a, b_n);
		else if (sz_b == 1)
		{
			if (b_n->target_node->position > (sz_a / 2))
				case_3(stack_b, stack_a, b_n);
			if (b_n->target_node->position < (sz_a / 2))
				case_4(stack_b, stack_a, b_n);
		}
		b_n = gest_best_move(stack_b);
		sz_b = size_linked_list(*stack_b);
		sz_a = size_linked_list(*stack_a);
	}
	final_sort(stack_a);
}

void	sort_big_stacks(t_stack_ps **stack_a, t_stack_ps **stack_b)
{
	int		*arr_flaged_1;
	int		*arr_same_as_stack_a;

	arr_flaged_1 = full_fill_arr_with_1(stack_a);
	arr_same_as_stack_a = full_fill_arr_with_stack(stack_a);
	subsquence_algo(stack_a, arr_flaged_1, arr_same_as_stack_a);
	free(arr_flaged_1);
	free(arr_same_as_stack_a);
	fill_out_stack_b(stack_a, stack_b);
	set_connection_a_b(stack_a, stack_b);
	fill_moves(stack_a);
	fill_moves(stack_b);
	// while ()
	check_best_move(stack_b, stack_a);
}
