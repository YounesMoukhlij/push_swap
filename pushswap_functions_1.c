/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_functions_1.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 16:50:15 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/06 17:56:23 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_ps	*new_linked_list(int content)
{
	t_stack_ps	*stack;

	stack = malloc(sizeof(t_stack_ps));
	if (!stack)
		return (NULL);
	stack->flag = 0;
	stack->moves = 0;
	stack->positon = 0;
	stack->next = NULL;
	stack->nbr = content;
	stack->index_in_stack = 0;
	stack->target_node = NULL;
	return (stack);
}

int	size_linked_list(t_stack_ps *stack_a)
{
	t_stack_ps	*tmp;
	int			i;

	i = 0;
	if (!stack_a)
		return (0);
	tmp = stack_a;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	add_back_linked_list(t_stack_ps *current, t_stack_ps **stack_a)
{
	if (!current || !stack_a)
		return ;
	if (!*stack_a)
		add_front_linked_list(stack_a, current);
	last_one_linked_list(*stack_a)->next = current;
}

t_stack_ps	*last_one_linked_list(t_stack_ps *stack_a)
{
	if (!stack_a)
		return (NULL);
	while (stack_a->next)
		stack_a = stack_a->next;
	return (stack_a);
}

void	add_front_linked_list(t_stack_ps **stack_a, t_stack_ps *current)
{
	if (!stack_a || !current)
		return ;
	current->next = *stack_a;
	*stack_a = current;
}
