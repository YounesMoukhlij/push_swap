/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_functions_0.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:14:38 by youmoukh          #+#    #+#             */
/*   Updated: 2023/12/31 16:29:17 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error_mssg(void)
{
	write(2, "Bhal gar3a \n", 12);
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

int	ft_check_emptiness(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] && s[i] != ' ')
			return (1);
		i++;
	}
	return (0);
}
