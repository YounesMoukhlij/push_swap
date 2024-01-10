/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:13:41 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/10 21:21:38 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	code(void)
{
	system("leaks a.out");
}

// void	__check_op(char *op)
// {
// 	if (strcmp(op, "sa\n") && strcmp(op, "sb\n") && strcmp(op, "ss\n") && strcmp(op, "pa\n")
// 		&& strcmp(op, "pb\n") && strcmp(op, "ra\n")
// 		&& strcmp(op, "rb\n") && strcmp(op, "rr\n")
// 		&& strcmp(op, "rra\n") && strcmp(op, "rrb\n")
// 		&& strcmp(op, "rrr\n"))
// 	{
// 		exit(write(1, "Error\n", 7));
// 	}
// }

int	main(int ac, char **av)
{
	char		**string_arg;
	char		**str_instrcutions;
	char		*read_from_stdin;
	t_stack_ps	*stack_a;
	t_stack_ps	*stack_b;

	stack_b = NULL;
	stack_a = NULL;
	if (ac == 1)
		exit(1);
	string_arg = ft_parsing(ac, av);
	fill_out_stack(string_arg, &stack_a);
	while (1337)
	{
		read_from_stdin = get_next_line(0);
		ft_str_join(str_instrcutions, read_from_stdin);
		check_entred_moves(read_from_stdin, &stack_a, &stack_b);
		if (!read_from_stdin)
			break ;
	}
	// while (read_from_stdin)
	// 	read_from_s = get_next_line(0);
	// str_instrcutions = fill_out_instructions(read_from_stdin);
	if (check_is_sorted(stack_a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	clear_stack_linked_list(&stack_a);
	ft_free_memory(string_arg);
	// atexit (code);
	return (0);
}
