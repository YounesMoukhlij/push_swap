/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stacks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:45:54 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/07 22:37:38 by youmoukh         ###   ########.fr       */
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

// void	case_1(t_stack_ps **stack_b, t_stack_ps **stack_a, int *b_m)
// {
// 	int			s_a;
// 	int			s_b;
// 	t_stack_ps	*tmp_head;

// 	tmp_head = (*stack_b);
// 	s_a = size_linked_list((*stack_a));
// 	s_b = size_linked_list((*stack_b));
// 	if ((tmp_head)->positon < (s_b / 2) && (tmp_head)->target_node->positon > (s_a / 2))
// 	{
// 	reverse_rotate_a(stack_a);
// 	fill_out_stack_position(stack_a);
// 	while (tmp_head->positon != 0)
// 	{
// 		rotate_b(stack_b);
// 		fill_out_stack_position(stack_b);
// 	}
// 	while (tmp_head->target_node->positon != 0)
// 	{
// 		reverse_rotate_a(stack_a);
// 		fill_out_stack_position(stack_a);
// 	}
// 	if ((tmp_head)->positon == 0 && (tmp_head)->target_node->positon == 0)
// 	{
// 		push_move_a(stack_a, stack_b);
// 		fill_out_stack_position(stack_a);
// 		*b_m = gest_best_move(stack_b, stack_a);
// 		//tmp_head = (*stack_b);
// 		return ;
// 	}
// 	}
// }

// void	check_best_move(t_stack_ps **stack_b, t_stack_ps **stack_a, int b_m)
// {
// 	t_stack_ps	*tmp_head;
// 	int			s_a;
// 	int			s_b;

// 	tmp_head = (*stack_b);
// 	while (tmp_head)
// 	{
// 		s_a = size_linked_list((*stack_a));
// 		s_b = size_linked_list((*stack_b));
// 		if (b_m == (tmp_head)->moves + (tmp_head)->target_node->moves)
// 		{
// 			case_1(stack_b, stack_a, &b_m);
// 			// case_2(stack_b, stack_a, &b_m);
// 			// case_3(stack_b, stack_a, &b_m);
// 			// case_4(stack_b, stack_a, &b_m);
// 			//b_m = gest_best_move(stack_b, stack_a);
// 		}
// 		(tmp_head) = (tmp_head)->next;
// 	}
// }

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
/*
void	case_1(t_stack_ps **stack_b, t_stack_ps **stack_a, int *b_m)
{
	int			s_a;
	int			s_b;
	t_stack_ps	*tmp_head;

	tmp_head = (*stack_b);
	s_a = size_linked_list((*stack_a));
	s_b = size_linked_list((*stack_b));
	if ((tmp_head)->positon < (s_b / 2) && (tmp_head)->target_node->positon > (s_a / 2))
	{
	reverse_rotate_a(stack_a);
	fill_out_stack_position(stack_a);
	while (tmp_head->positon != 0 || tmp_head->target_node->positon != 0)
	{
		rotate_b(stack_b);
		reverse_rotate_a(stack_a);
		fill_out_stack_position(stack_a);
		fill_out_stack_position(stack_b);
	}
	if ((tmp_head)->positon == 0 && (tmp_head)->target_node->positon == 0)
	{
		push_move_a(stack_a, stack_b);
		fill_out_stack_position(stack_a);
		*b_m = gest_best_move(stack_b, stack_a);
		tmp_head = (*stack_b);
		return ;
	}
	}
}

void	check_best_move(t_stack_ps **stack_b, t_stack_ps **stack_a, int b_m)
{
	t_stack_ps	*tmp_head;
	int			s_a;
	int			s_b;

	tmp_head = (*stack_b);
	while (tmp_head)
	{
		s_a = size_linked_list((*stack_a));
		s_b = size_linked_list((*stack_b));
		if (b_m == (tmp_head)->moves + (tmp_head)->target_node->moves)
		{
			if ((tmp_head)->positon < (s_b / 2) && (tmp_head)->target_node->positon > (s_a / 2))
			{
				case_1(stack_b, stack_a, &b_m);
			}
			// if ((tmp_head)->positon > (s_b / 2) && (tmp_head)->target_node->positon < (s_a / 2))
			// {
			// 	reverse_rotate_b(stack_b);
			// 	fill_out_stack_position(stack_b);
			// 	while (tmp_head->positon != 0)
			// 	{
			// 		reverse_rotate_b(stack_b);
			// 		fill_out_stack_position(stack_b);
			// 	}
				// while (tmp_head->target_node->positon != 0)
				// {
				// 	rotate_b(stack_a);
				// 	fill_out_stack_position(stack_a);
				// }
			// 	if ((tmp_head)->positon == 0 && (tmp_head)->target_node->positon == 0)
			// 	{
			// 		push_move_a(stack_a, stack_b);
			// 		fill_out_stack_position(stack_a);
			// 		b_m = gest_best_move(stack_b, stack_a);
			// 		tmp_head = (*stack_b);
			// 		//break ;
			// 	}
			// }
			
		}
		(tmp_head) = (tmp_head)->next;
	}
}
*/

void	calculate_moves(t_stack_ps **stack_a, t_stack_ps **stack_b)
{
	fill_moves(stack_a);
	fill_moves(stack_b);
}

void	sort_big_stacks(t_stack_ps **stack_a, t_stack_ps **stack_b)
{
	int		*arr_flaged_1;
	int		*arr_same_as_stack_a;

	arr_flaged_1 = full_fill_arr_with_1(stack_a);
	arr_same_as_stack_a = full_fill_arr_with_stack(stack_a);
	subsquence_algo(stack_a, arr_flaged_1, arr_same_as_stack_a);
	fill_out_stack_b(stack_a, stack_b);
	set_connection_a_b(stack_a, stack_b);
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