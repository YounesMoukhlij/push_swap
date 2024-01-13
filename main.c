/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:13:41 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/13 16:59:35 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	char		**string_arg;
	t_stack_ps	*stack_a;
	t_stack_ps	*stack_b;

	stack_b = NULL;
	stack_a = NULL;
	if (ac == 1)
		exit(0);
	string_arg = ft_parsing(ac, av);
	fill_out_stack(string_arg, &stack_a);
	ft_free_memory(string_arg);
	if (check_is_sorted(stack_a) == 0)
	{
		if (size_linked_list(stack_a) <= 3)
			sort_simple_three(&stack_a);
		else if (size_linked_list(stack_a) <= 6)
			sort_simple_five(&stack_a, &stack_b);
		else if (size_linked_list(stack_a) > 6)
			sort_big_stacks(&stack_a, &stack_b);
	}
	clear_stack_linked_list(&stack_a);
	return (0);
}
