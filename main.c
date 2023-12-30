/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younesmoukhlij <younesmoukhlij@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:13:41 by youmoukh          #+#    #+#             */
/*   Updated: 2023/12/30 23:47:43 by younesmoukh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	// t_stack_ps	*a;
	// t_stack_ps	*b;
	char		**string_arg;

	// a = NULL;
	// b = NULL;
	string_arg = ft_parsing(ac, av);
	int i = 0;
	while (string_arg[i])
		printf("%s   ", string_arg[i++]);
	// if (!a)
	// 	ft_error_mssg();
	return (0);
}
