/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_functions_4.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 19:20:45 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/06 21:08:08 by youmoukh         ###   ########.fr       */
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
