/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stacks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:45:54 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/06 21:14:51 by youmoukh         ###   ########.fr       */
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

int	check_place_in_stacks(t_stack_ps *node_b, t_stack_ps *node_a, int size_a)
{
	int	size_b;
	
	size_b = size_linked_list((*stack_b));

	

}

int	gest_best_move(t_stack_ps **stack_b, t_stack_ps **stack_a)
{
	t_stack_ps	*tmp_head;
	int			*tab;
	int			i;
	int			size;
	int			best_move;

	i = 0;
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
	best_move = find_minimum_move(tab, size);
	tmp_head = (*stack_b);
	while (tmp_head)
	{
		if (best_move == (tmp_head)->moves + (tmp_head)->target_node->moves)
		{
			check_place_in_stacks(tmp_head, tmp_head->target_node, size_linked_list(stack_a));
			break ;
		}
		(tmp_head) = (tmp_head)->next;
	}
	return (best_move);
}

void	calculate_moves(t_stack_ps **stack_a, t_stack_ps **stack_b)
{
	int	best_move;

	fill_moves(stack_a);
	fill_moves(stack_b);
	best_move = gest_best_move(stack_b, stack_a);
}

void	sort_big_stacks(t_stack_ps **stack_a, t_stack_ps **stack_b)
{
	int		*arr_flaged_1;
	int		*arr_same_as_stack_a;

	arr_flaged_1 = full_fill_arr_with_1(stack_a);
	arr_same_as_stack_a = full_fill_arr_with_stack(stack_a);
	subsquence_algo(stack_a, arr_flaged_1, arr_same_as_stack_a);
	fill_out_stack_b(stack_a, stack_b);
	set_connection_stack_a_b(stack_a, stack_b);
	calculate_moves(stack_a, stack_b);
}

int	find_min_node(t_stack_ps *stack)
{
	t_stack_ps	*temp;
    int			min;
	int			size;

	size = size_linked_list((stack));
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