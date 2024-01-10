/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_str_moves.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younesmoukhlij <younesmoukhlij@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:28:16 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/11 00:24:27 by younesmoukh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	check_entred_moves(char *move, t_stack_ps **stack_a, t_stack_ps **stack_b)
{
	if (strcmp(move, "sa\n") == 0)
		swap_a(stack_a);
	else if (strcmp(move, "sb\n") == 0)
		swap_b(stack_b);
	else if (strcmp(move, "ss\n") == 0)
		swap_stack_a_b(stack_a, stack_b);
	else if (strcmp(move, "ra\n") == 0)
		rotate_a(stack_a);
	else if (strcmp(move, "rb\n") == 0)
		rotate_b(stack_b);
	else if (strcmp(move, "rr\n") == 0)
		rotate_stack_a_b(stack_a, stack_b);
	else if (strcmp(move, "rra\n") == 0)
		reverse_rotate_a(stack_a);
	else if (strcmp(move, "rrb\n") == 0)
		reverse_rotate_b(stack_b);
	else if (strcmp(move, "rrr\n") == 0)
		reverse_rotate_a_b(stack_a, stack_b);
	else if (strcmp(move, "pb\n") == 0)
		push_move_b(stack_a, stack_b);
	else if (strcmp(move, "pa\n") == 0)
		push_move_b(stack_a, stack_b);
	else
		ft_error_mssg();
}

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
