/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_functions_2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:40:58 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/05 21:29:35 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_ps	*ft_beforelast(t_stack_ps *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next->next)
		stack = stack->next;
	return (stack);
}

int	check_is_sorted(t_stack_ps *stack_a)
{
	t_stack_ps	*temp;
	t_stack_ps	*stack;

	stack = stack_a;
	while ((stack))
	{
		temp = (stack)->next;
		while (temp)
		{
			if ((stack)->nbr > temp->nbr)
				return (0);
			temp = temp->next;
		}
		(stack) = (stack)->next;
	}
	return (1);
}

t_stack_ps	*locate_the_node(t_stack_ps **stack, int i)
{
	t_stack_ps	*temp_head;
	int			increment;

	increment = 0;
	temp_head = (*stack);
	while (increment < i)
	{
		temp_head = temp_head->next;
		increment++;
	}
	return (temp_head);
}

int	max(int *arr, int index)
{
	int	i;
	int	max;

	i = 0;
	max = 0;
	while (i < index)
	{
		if (arr[i] > max)
			max = arr[i];
		i++;
	}
	return (max);
}
