/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple_three.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:36:47 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/13 16:59:42 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack_ps **stack_a)
{
	if ((*stack_a)->nbr > (*stack_a)->next->nbr)
		swap_a(stack_a);
}

void	sort_simple_three(t_stack_ps **stack_a)
{
	int	top;
	int	middle;
	int	bottom;

	if (check_is_sorted((*stack_a)) == 1)
		return ;
	if (size_linked_list(*stack_a) == 2)
		return (sort_two(stack_a));
	top = (*stack_a)->nbr;
	middle = (*stack_a)->next->nbr;
	bottom = (*stack_a)->next->next->nbr;
	if (top > middle && middle > bottom)
		return (swap_a(stack_a), reverse_rotate_a(stack_a));
	else if (top < bottom && bottom > middle)
		swap_a(stack_a);
	else if (top > middle && top > bottom)
		rotate_a(stack_a);
	else if (middle > top && top > bottom)
		reverse_rotate_a(stack_a);
	else if (top < middle && middle > bottom)
		return (swap_a(stack_a), rotate_a(stack_a));
}
