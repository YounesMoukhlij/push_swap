/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple_five.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:45:35 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/13 17:00:46 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_0_back_to_index(t_stack_ps **stack_a, t_stack_ps **stack_b)
{
	t_stack_ps	*temp_head_a;
	t_stack_ps	*temp_head_b;

	temp_head_a = (*stack_a);
	temp_head_b = (*stack_b);
	while ((*stack_a))
	{
		(*stack_a)->index_in_stack = 0;
		(*stack_a) = (*stack_a)->next;
	}
	(*stack_a) = temp_head_a;
	while ((*stack_b))
	{
		(*stack_b)->index_in_stack = 0;
		(*stack_b) = (*stack_b)->next;
	}
	(*stack_b) = temp_head_b;
}

void	find_the_minimum_node(t_stack_ps **stack_a)
{
	t_stack_ps	*temp_stack;
	int			min;

	temp_stack = (*stack_a);
	min = (*stack_a)->nbr;
	(*stack_a)->index_in_stack = 1;
	while ((*stack_a))
	{
		if ((*stack_a)->nbr < min)
		{
			min = (*stack_a)->nbr;
			(*stack_a)->index_in_stack = 1;
		}
		(*stack_a) = (*stack_a)->next;
	}
	(*stack_a) = temp_stack;
	while (temp_stack)
	{
		if (temp_stack->nbr != min)
			temp_stack->index_in_stack = 0;
		temp_stack = temp_stack->next;
	}
}

void	sort_helper(t_stack_ps **s_a, t_stack_ps **s_b, t_stack_ps *t_d, int *j)
{
	get_0_back_to_index(s_a, s_b);
	find_the_minimum_node(s_a);
	while (t_d)
	{
		if (t_d->index_in_stack == 1)
			*j = t_d->position;
		t_d = t_d->next;
	}
	while ((*s_a)->index_in_stack != 1)
	{
		if (*j > 2)
			reverse_rotate_a(s_a);
		else
			rotate_a(s_a);
	}
	push_move_b(s_a, s_b);
}

void	sort_simple_five(t_stack_ps **stack_a, t_stack_ps **stack_b)
{
	int			i;
	int			j;
	t_stack_ps	*tmp_head;

	tmp_head = (*stack_a);
	if (size_linked_list((*stack_a)) == 4)
		i = 1;
	else
		i = 0;
	while (i++ < 2)
	{
		sort_helper(stack_a, stack_b, tmp_head, &j);
		tmp_head = (*stack_a);
	}
	sort_simple_three(stack_a);
	push_move_a(stack_a, stack_b);
	if (size_linked_list((*stack_a)) == 4)
		push_move_a(stack_a, stack_b);
}
