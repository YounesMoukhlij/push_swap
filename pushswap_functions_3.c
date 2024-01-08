/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_functions_3.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:26:39 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/08 20:22:59 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*full_fill_arr_with_1(t_stack_ps **stack_a)
{
	int	*arr;
	int	size;
	int	i;

	i = 0;
	size = size_linked_list((*stack_a));
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (arr);
	while (i < size)
		arr[i++] = 1;
	return (arr);
}

int	*full_fill_arr_with_stack(t_stack_ps **stack_a)
{
	t_stack_ps	*temp_head;
	int			*arr;
	int			size;
	int			i;

	i = 0;
	temp_head = (*stack_a);
	size = size_linked_list((*stack_a));
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (arr);
	while (temp_head)
	{
		arr[i++] = temp_head->nbr;
		temp_head = temp_head->next;
	}
	free (temp_head);
	return (arr);
}

int	check_stack(t_stack_ps **stack_a)
{
	t_stack_ps	*temp_head;

	temp_head = (*stack_a);
	while (temp_head)
	{
		if (temp_head->flag == 0)
			return (temp_head->position);
		temp_head = temp_head->next;
	}
	free (temp_head);
	return (-1);
}

void	fill_out_stack_b(t_stack_ps **stack_a, t_stack_ps **stack_b)
{
	int			size;
	int			pos;

	size = size_linked_list(*stack_a);
	while (check_stack(stack_a) != -1)
	{
		pos = check_stack(stack_a);
		if (pos > (size / 2))
		{
			while ((*stack_a)->flag != 0)
				reverse_rotate_a(stack_a);
		}
		else
		{
			while ((*stack_a)->flag != 0)
				rotate_a(stack_a);
		}
		fill_out_stack_position(stack_a);
		push_move_b(stack_a, stack_b);
	}
	fill_out_stack_position(stack_a);
	fill_out_stack_position(stack_b);
}

void	fill_moves(t_stack_ps **stack)
{
	t_stack_ps	*tmp_head;
	int			size;

	size = size_linked_list(*stack);
	fill_out_stack_position(stack);
	tmp_head = (*stack);
	while (tmp_head)
	{
		if (tmp_head->position <= (size / 2))
			tmp_head->moves = tmp_head->position;
		else if (tmp_head->position >= (size / 2))
			tmp_head->moves = size - (tmp_head->position);
		tmp_head = tmp_head->next;
	}
	free (tmp_head);
}
