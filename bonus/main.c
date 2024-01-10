/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younesmoukhlij <younesmoukhlij@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:13:41 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/11 00:36:19 by younesmoukh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
#include <stdio.h>

void	code(void)
{
	system("leaks a.out");
}
char *full_fill_str(char *str)
{
	char	*s;
	int		i;

	i = ft_strlen(str);
	s = malloc(i + 1);
	if (!s)
		return (free (s), NULL);
	i = 0;
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

int	main(int ac, char **av)
{
	char		**string_arg;
	char	*str;
	static char	*s;
	t_stack_ps	*stack_a;
	t_stack_ps	*stack_b;

	if (ac == 1)
		exit(1);
	string_arg = ft_parsing(ac, av);
	fill_out_stack(string_arg, &stack_a);
	str = get_next_line(0);
	while (str)
	{
		str = get_next_line(0);
		s = full_fill_str(str);
	}
	check_entred_moves(s, &stack_a, &stack_b);
	// printf("%s", s);
	if (check_is_sorted(stack_a))
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
	// clear_stack_linked_list(&stack_a);
	// ft_free_memory(string_arg);
	return (0);
}
