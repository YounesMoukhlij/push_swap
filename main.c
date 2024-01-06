/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:13:41 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/06 20:13:18 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void code(void)
// {
// 	system("leaks push_swap");
// }

int	main(int ac, char **av)
{
	t_stack_ps	*stack_a;
	//t_stack_ps	*stack;
	t_stack_ps	*stack_b;
	char		**string_arg;

	stack_a = NULL;
	stack_b = NULL;
	string_arg = ft_parsing(ac, av);
	fill_out_stack(string_arg, &stack_a);
	//stack = stack_a;
	if (check_is_sorted(stack_a) == 0)
	{
		if (ac <= 4)
			sort_simple_three(ac, &stack_a);
		else if (ac <= 6)
			sort_simple_five(&stack_a, &stack_b);
		else if (ac > 6)
			sort_big_stacks(&stack_a, &stack_b);
	}
	ft_free_memory(string_arg);
	printf("\n\n\n\n\n");
	printf("\033[32m\nAFFICHAGe A\n\033[0m");
	while (stack_a)
	{
		printf("n-[%d]-p-[%p]-index-[%d]-flag-[%d]-ads-[%d]-moves-[%d] \n", stack_a->nbr, &(stack_a->nbr), stack_a->positon, stack_a->index_in_stack, stack_a->flag, stack_a->moves);
		stack_a = stack_a->next;
	}
	printf("\033[32m\nAFFICHAGe B\n\033[0m");
	while (stack_b)
	{
		printf("n-[%d]-p-[%d]-index-[%d]-flag-[%d]-ads-[%d]-moves-[%d] \n", stack_b->nbr, stack_b->positon, stack_b->index_in_stack, stack_b->flag, stack_b->target_node->nbr, stack_b->moves);
		stack_b = stack_b->next;
	}
	//clear_stack_linked_list(&stack_a);
	// atexit(code);
	return (0);
}
