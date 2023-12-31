/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:13:41 by youmoukh          #+#    #+#             */
/*   Updated: 2023/12/31 16:31:46 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack_ps	*a;
	t_stack_ps	*b;
	char		**string_arg;

	a = NULL;
	b = NULL;
	string_arg = ft_parsing(ac, av);
	int i = 0;
	while (string_arg[i])
		printf("%ld\n", ft_atoi(string_arg[i++]));
	return (0);
}
