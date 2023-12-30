/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_functions_0.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:14:38 by youmoukh          #+#    #+#             */
/*   Updated: 2023/12/30 20:39:02 by youmoukh         ###   ########.fr       */
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
	int		signe;
	long	res;

	res = 0;
	signe = 1;
	while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\f'
		|| *s == '\v' || *s == '\r')
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			signe = -1;
		s++;
	}
	while (*s && (*s >= '0' && *s <= '9'))
	{
		res = res * 10 + (*s - 48);
		s++;
	}
	if ((res * signe) > 2147483647 || (res * signe) < -2147483648)
		ft_error_mssg();
	return (res * signe);
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
