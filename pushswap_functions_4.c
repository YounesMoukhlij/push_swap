/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_functions_4.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 19:20:45 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/08 19:47:47 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_ps	*find_target(t_stack_ps **stack_a, int content)
{
	t_stack_ps	*t_node;
	t_stack_ps	*tmp1;

	tmp1 = (*stack_a);
	t_node = NULL;
	while ((tmp1))
	{
		if ((tmp1)->nbr > content && t_node == NULL)
			t_node = (tmp1);
		if ((tmp1)->nbr > content && t_node->nbr > tmp1->nbr)
			t_node = (tmp1);
		(tmp1) = (tmp1)->next;
	}
	return (t_node);
}

void	set_connection_a_b(t_stack_ps **stack_a, t_stack_ps **stack_b)
{
	t_stack_ps	*tmp2;

	tmp2 = (*stack_b);
	while (tmp2)
	{
		tmp2->target_node = find_target(stack_a, tmp2->nbr);
		(tmp2) = (tmp2)->next;
	}
}

t_stack_ps	*find_minimum_move(int i, t_stack_ps **stack)
{
	t_stack_ps	*min_node;
	t_stack_ps	*tmp;
	int			size;

	tmp = (*stack);
	min_node = NULL;
	size = size_linked_list(tmp);
	while (tmp)
	{
		if (i == tmp->moves + tmp->target_node->moves)
		{
			min_node = tmp;
			break ;
		}
		tmp = tmp->next;
	}
	return (min_node);
}

t_stack_ps	*gest_best_move(t_stack_ps **stack_b)
{
	t_stack_ps	*tmp_head;
	int			size;
	int			i;

	i = INT_MAX;
	tmp_head = (*stack_b);
	size = size_linked_list(*stack_b);
	while (tmp_head)
	{
		if ((tmp_head)->moves + (tmp_head)->target_node->moves < i)
			i = (tmp_head)->moves + (tmp_head)->target_node->moves;
		(tmp_head) = (tmp_head)->next;
	}
	return (find_minimum_move(i, stack_b));
}

t_stack_ps	*find_min_node(t_stack_ps **stack_a)
{
	t_stack_ps	*temp_stack;
	t_stack_ps	*temp;
	int			min;

	temp_stack = (*stack_a);
	min = temp_stack->nbr;
	while (temp_stack)
	{
		if (temp_stack->nbr < min)
		{
			min = temp_stack->nbr;
			temp = temp_stack;
		}
		temp_stack = temp_stack->next;
	}
	return (temp);
}
