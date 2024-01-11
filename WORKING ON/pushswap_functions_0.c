/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_functions_0.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:14:38 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/10 11:49:06 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error_mssg(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	*ft_free_memory(char **string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		free (string[i]);
		i++;
	}
	free (string);
	return (NULL);
}

long	ft_atoi(char *s)
{
	int		num_signe;
	long	resulat;

	resulat = 0;
	num_signe = 1;
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			num_signe = -1;
		s++;
	}
	while (*s && (*s >= '0' && *s <= '9'))
	{
		resulat = resulat * 10 + (*s - '0');
		if ((resulat * num_signe) > INT_MAX || (resulat * num_signe) < INT_MIN)
			ft_error_mssg();
		s++;
	}
	return (resulat * num_signe);
}

int	ft_strlen(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	clear_stack_linked_list(t_stack_ps **stack_a)
{
	t_stack_ps	*current;
	t_stack_ps	*temp;

	current = *stack_a;
	while (current)
	{
		temp = current->next;
		free (current);
		current = temp;
	}
	*stack_a = NULL;
}
