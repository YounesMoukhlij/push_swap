/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stacks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younesmoukhlij <younesmoukhlij@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:45:54 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/08 01:58:33 by younesmoukh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_minimum_move(int *tab, int size)
{
	int	i;
	int	min;

	i = 0;
	while (size)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i + 1] > tab[i])
				min = tab[i];
			i++;
		}
		size--;
	}
	free(tab);
	return (min);
}

int	gest_best_move(t_stack_ps **stack_b, t_stack_ps **stack_a)
{
	t_stack_ps	*tmp_head;
	int			*tab;
	int			i;
	int			size;

	i = 0;
	(void) stack_a;
	tmp_head = (*stack_b);
	size = size_linked_list(tmp_head);
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (0);
	while (tmp_head)
	{
		tab[i++] = (tmp_head)->moves + (tmp_head)->target_node->moves;
		(tmp_head) = (tmp_head)->next;
	}
	return (find_minimum_move(tab, size));
}

t_stack_ps	*find_highest(t_stack_ps *stack)
{
	t_stack_ps	*smallest_node;

	if (stack == NULL)
		return (NULL);
	 smallest_node = (stack);
	while (stack)
	{
		if (stack->nbr > smallest_node->nbr)
			smallest_node = stack;
		stack = stack->next;
	}
	return (smallest_node);
}


void	sort_big_stacks(t_stack_ps **stack_a, t_stack_ps **stack_b)
{
	int size;
	int s;

	size = size_linked_list((*stack_a));
	s = size;
	while (s--)
		push_move_b(stack_a, stack_b);
	fill_out_stack_position(stack_b);
	s = size;
	t_stack_ps *node_high = NULL;
	while (s-- > 0)
	{
		if (*stack_b == NULL)
			break ;
		if (s == 0)
			break;

					node_high = find_highest(*stack_b);

		// printf("                  stack_b [%d]\n", (*stack_b)->nbr);
		//printf("     >>>> %d %d\n", node_high->nbr, node_high->positon);
		if (node_high->positon > (s / 2))
		{
			while (node_high->positon != 0)
				reverse_rotate_b(stack_b);
			// printf("%d  %d\n", node_high->nbr, node_high->positon);
			if (node_high->positon == 0)
			{
				push_move_a(stack_a, stack_b);
				s = size_linked_list(*stack_b);
			}
		}
			node_high = find_highest(*stack_b);
		if (node_high->positon < (s / 2))
		{
			while (node_high->positon != 0)
				rotate_b(stack_b);
			// printf("%d  %d\n", node_high->nbr, node_high->positon);
			if (node_high->positon == 0)
			{
				push_move_a(stack_a, stack_b);
				s = size_linked_list(*stack_b);
			}
		}
		if (node_high->positon == 1)
			push_move_a(stack_a, stack_b);
	}
	// 	if (node_high->positon < (s / 2))
	// 	{
	// 			while (node_high->positon != 0)
	// 				rotate_b(stack_b);
	// 			if (node_high->positon == 0)
	// 			{
	// 				push_move_a(stack_a, stack_b);
	// 				s = size_linked_list(*stack_b);
	// 				// break ;
	// 				node_high = find_highest(*stack_b);
	// 			}
	// 	}
	// }
	//printf("%d\n", node_high->nbr);
	printf("\n");


}

int	find_min_node(t_stack_ps *stack)
{
	t_stack_ps	*temp;
    int			min;

	temp = (stack);
	min = temp->nbr;
	while (temp)
	{
		if (temp->nbr < min)
			min = temp->nbr;
		temp = temp->next;
	}
	printf("\n>>>>>>>>>>>>>>> min = [%d]\n", min);
	return (min);
}
