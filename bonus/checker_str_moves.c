/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_str_moves.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:28:16 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/10 21:13:15 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	check_entred_moves(char *move, t_stack_ps **stack_a, t_stack_ps **stack_b)
{
	if (check_entred_string(move, "sa\n"))
		swap_a(stack_a);
	else if (check_entred_string(move, "sb\n"))
		swap_b(stack_b);
	else if (check_entred_string(move, "ss\n"))
		swap_stack_a_b(stack_a, stack_b);
	else if (check_entred_string(move, "ra\n"))
		rotate_a(stack_a);
	else if (check_entred_string(move, "rb\n"))
		rotate_b(stack_b);
	else if (check_entred_string(move, "rr\n"))
		rotate_stack_a_b(stack_a, stack_b);
	else if (check_entred_string(move, "rra\n"))
		reverse_rotate_a(stack_a);
	else if (check_entred_string(move, "rrb\n"))
		reverse_rotate_b(stack_b);
	else if (check_entred_string(move, "rrr\n"))
		reverse_rotate_a_b(stack_a, stack_b);
	else if (check_entred_string(move, "pb\n"))
		push_move_b(stack_a, stack_b);
	else if (check_entred_string(move, "pa\n"))
		push_move_b(stack_a, stack_b);
}

int	check_entred_string(char *move, char *entred_move)
{
	int	i;

	i = 0;
	while (move[i] || entred_move[i])
	{
		if (move[i] != entred_move[i])
			return (0);
	}
	return (1);
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
