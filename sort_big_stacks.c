/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stacks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:45:54 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/04 21:18:21 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*full_fill_arr_with_1(t_stack_ps **stack_a)
{
	int	*arr;
	int	size;
	int	i;

	i = 0;
	size = size_linked_list((*stack_a));
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (arr);
	while (i < size)
		arr[i++] = 1;
	return (arr);
}

int	*full_fill_arr_with_stack(t_stack_ps **stack_a)
{
	t_stack_ps	*temp_head;
	int			*arr;
	int			size;
	int			i;

	i = 0;
	temp_head = (*stack_a);
	size = size_linked_list((*stack_a));
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (arr);
	while ((*stack_a))
	{
		arr[i++] = (*stack_a)->nbr;
		(*stack_a) = (*stack_a)->next;
	}
	(*stack_a) = temp_head;
	return (arr);
}

int	max(int *arr, int index)
{
	int	i;
	int	max;

	i = 0;
	max = 0;
	while (i < index)
	{
		if (arr[i] > max)
			max = arr[i];
		i++;
	}
	return (max);
}
void	subsquence_algorithm(t_stack_ps **stack, int *arr_1, int *arr_stack)
{
	int	size;
	int	i;
	int	j;
	int	max_num;

	i = 1;
	j = 0;
	size = size_linked_list(*stack);
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
	max_num = max(arr_1, size) - 1;
	//int last = 0;
	i = 0;
	int s = size;
	while (s)
	{
		if (arr_1[s] == max_num)
		{
			printf("%d ", arr_1[s]);
			max_num--;
		}
		s--;
	}
	printf("\n\n\n\n");
	i = 0;
	while (i < size)
	{
		printf("%d ", arr_1[i++]);
	}
}

void	sort_big_stacks(t_stack_ps **stack_a, t_stack_ps **stack_b)
{
	int		*arr_flaged_1;
	int		*arr_same_as_stack_a;

	(void)	stack_b;
	arr_flaged_1 = full_fill_arr_with_1(stack_a);
	arr_same_as_stack_a = full_fill_arr_with_stack(stack_a);
	subsquence_algorithm(stack_a, arr_flaged_1, arr_same_as_stack_a);
}

// int p = 0;
// while (p < size)
// {
// 	printf("%d ", arr[p++]);
// }