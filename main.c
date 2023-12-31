/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:13:41 by youmoukh          #+#    #+#             */
/*   Updated: 2023/12/31 20:49:51 by youmoukh         ###   ########.fr       */
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
	t_stack_ps	*stack_b;
	char		**string_arg;

	stack_a = NULL;
	stack_b = NULL;
	string_arg = ft_parsing(ac, av);
	fill_out_stack(string_arg, &stack_a);
	while (stack_a)
	{
		printf("%d\n", stack_a->nbr);
		stack_a = stack_a->next;
	}
	ft_free_memory(string_arg);
	clear_stack_linked_list(&stack_a);
	//atexit(code);
	return (0);
}
