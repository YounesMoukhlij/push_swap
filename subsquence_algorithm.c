/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subsquence_algorithm.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younesmoukhlij <younesmoukhlij@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:59:15 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/08 00:08:55 by younesmoukh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	flag_stack_a(t_stack_ps **stack_a, int *arr_1)
{
	int	size;
	int	max_num;

	size = size_linked_list(*stack_a);
	max_num = max(arr_1, size);
	while (size >= 0)
	{
		if (arr_1[size] == max_num)
		{
			(locate_the_node(stack_a, size))->flag = 1;
			max_num -= 1;
		}
		size--;
	}
}

void	subsquence_algo(t_stack_ps **stack_a, int *arr_1, int *arr_stack)
{
	int	size;
	int	i;
	int	j;

	i = 1;
	j = 0;
	size = size_linked_list(*stack_a);
	while (i < size)
	{
		j = 0;
		while (j < i)
		{
			if (arr_stack[i] > arr_stack[j] && arr_1[i] < arr_1[j] + 1)
				arr_1[i] = arr_1[j] + 1;
			j++;
		}
		i++;
	}
	flag_stack_a(stack_a, arr_1);
}
