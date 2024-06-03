/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_functions_5.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:52:29 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/12 19:52:54 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max_value_node(t_stack_ps **stack_a)
{
	t_stack_ps	*temp_stack;
	t_stack_ps	*temp;
	int			max;

	temp_stack = (*stack_a);
	max = INT_MIN;
	while (temp_stack)
	{
		if (temp_stack->nbr > max)
		{
			max = temp_stack->nbr;
			temp = temp_stack;
		}
		temp_stack = temp_stack->next;
	}
	return (max);
}

int	find_min_value_node(t_stack_ps **stack_a)
{
	t_stack_ps	*temp_stack;
	t_stack_ps	*temp;
	int			min;

	temp_stack = (*stack_a);
	min = INT_MAX;
	while (temp_stack)
	{
		if (temp_stack->nbr < min)
		{
			min = temp_stack->nbr;
			temp = temp_stack;
		}
		temp_stack = temp_stack->next;
	}
	return (min);
}
