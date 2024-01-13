/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_str_moves.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:28:16 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/13 13:09:42 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	check_helper(char **move, t_stack_ps **s_a, t_stack_ps **s_b, int *i)
{
	if (ft_strcmp(move[*i], "rra") == 1)
		reverse_rotate_a(s_a);
	else if (ft_strcmp(move[*i], "rrb") == 1)
		reverse_rotate_b(s_b);
	else if (ft_strcmp(move[*i], "rrr") == 1)
		reverse_rotate_a_b(s_a, s_b);
	else if (ft_strcmp(move[*i], "pb") == 1)
		push_move_b(s_a, s_b);
	else if (ft_strcmp(move[*i], "pa") == 1)
		push_move_a(s_a, s_b);
}

void	check_entred_moves(char **move, t_stack_ps **s_a, t_stack_ps **s_b)
{
	int			i;

	i = 0;
	while (move[i])
	{
		if (ft_strcmp(move[i], "sa") == 1)
			swap_a(s_a);
		else if (ft_strcmp(move[i], "sb") == 1)
			swap_b(s_b);
		else if (ft_strcmp(move[i], "ss") == 1)
			swap_stack_a_b(s_a, s_b);
		else if (ft_strcmp(move[i], "ra") == 1)
			rotate_a(s_a);
		else if (ft_strcmp(move[i], "rb") == 1)
			rotate_b(s_b);
		else if (ft_strcmp(move[i], "rr") == 1)
			rotate_stack_a_b(s_a, s_b);
		else
			check_helper(move, s_a, s_b, &i);
		i++;
	}
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
