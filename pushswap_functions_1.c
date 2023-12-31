/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_functions_1.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 16:50:15 by youmoukh          #+#    #+#             */
/*   Updated: 2023/12/31 20:01:01 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_ps	*new_linked_list(int content)
{
	t_stack_ps	*a;

	a = malloc(sizeof(t_stack_ps));
	if (!a)
		return (NULL);
	a->nbr = content;
	a->next = NULL;
	return (a);
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
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	add_back_linked_list(t_stack_ps *current, t_stack_ps **stack_a)
{
	if (!current || !stack_a)
		return ;
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
