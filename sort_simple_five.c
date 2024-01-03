/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple_five.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:45:35 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/03 21:14:23 by youmoukh         ###   ########.fr       */
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

void	sort_simple_five(t_stack_ps **stack_a, t_stack_ps **stack_b)
{
	t_stack_ps	*tmp_head_a;
	t_stack_ps	*tmp_head_b;
	// int i = 0;
	tmp_head_b = (*stack_b);
	tmp_head_a = (*stack_a);
	// while (i < 2)
	// {
		//get_0_back_to_index(stack_a, stack_b);
		find_the_minimum_node(stack_a);
		while ((*stack_a))
		{
			if ((*stack_a)->index_in_stack == 1)
			{
				push_move_b(stack_a, stack_b);
			//	break ;
			}
			(*stack_a) = (*stack_a)->next;
		}
		(*stack_a) = tmp_head_a;
	// 	i++;
	// }
	//get_0_back_to_index(stack_a, stack_b);
	//push_move_b(stack_a, stack_b);
	//printf("%p\n",(*stack_a)->next->next );
	
	//(*stack_a) = tmp_head_a;
	while ((*stack_a))
	{
		printf("\033[32mnbr %d index %d\n\033[32m\n", (*stack_a)->nbr, (*stack_a)->index_in_stack);
		(*stack_a) = (*stack_a)->next;
	}
	// printf("STACK B\n");
	// while ((*stack_b))
	// {
	// 	printf("\033[32mnbr %d index %d\n\033[32m\n", (*stack_b)->nbr, (*stack_b)->index_in_stack);
	// 	(*stack_b) = (*stack_b)->next;
	// }
}
