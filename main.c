/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:13:41 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/02 20:50:38 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void code(void)
{
	system("leaks push_swap");
}

int	main(int ac, char **av)
{
	t_stack_ps	*stack_a;
	t_stack_ps	*stack_b;
	char		**string_arg;

	stack_a = NULL;
	stack_b = NULL;
	string_arg = ft_parsing(ac, av);
	fill_out_stack(string_arg, &stack_a);
	if (check_is_sorted(stack_a) == 0)
	{
		if (ac <= 4)
			sort_simple_three(ac, &stack_a);
		// else if (ac <= 6)
		// 	sort_simple_five(&stack_a, &stack_b);
		// else if (ac > 6)
		// 	sort_big_stacks(&stack_a, &stack_b);
	}
	while (stack_a)
	{
		printf("%d\n", stack_a->nbr);
		stack_a = stack_a->next;
	}
	ft_free_memory(string_arg);
	atexit(code);
	return (0);
}
