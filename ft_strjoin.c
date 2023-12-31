/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 20:53:58 by youmoukh          #+#    #+#             */
/*   Updated: 2023/12/31 15:54:12 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_length(char **str, int ac)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (i < ac - 1)
	{
		l += ft_strlen(str[i]);
		if (i < ac - 2)
			l += 1;
		i++;
	}
	return (l);
}

char	*copy_to_string(int ac, char *new, char *old, int *position)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(new);
	while (old[i] != '\0')
	{
		new[len + i] = old[i];
		i++;
	}
	if (*position < ac - 2)
	{
		new[len + i] = ' ';
		i++;
	}
	new[len + i] = '\0';
	return (new);
}

char	*ft_strjoin(int ac, char **av)
{
	char	*str;
	int		i;

	str = NULL;
	i = 0;
	str = malloc(sizeof(char) * ft_length(av, ac) + 1);
	if (!str)
		return (str);
	str[i] = '\0';
	while (i < ac - 1)
	{
		copy_to_string(ac, str, av[i], &i);
		i++;
	}
	return (str);
}
