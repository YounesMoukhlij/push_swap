/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 20:53:58 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/17 11:13:36 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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
	if (*position <= ac - 2)
	{
		new[len + i] = ' ';
		i++;
	}
	new[len + i] = '\0';
	return (new);
}

int	get_len_for_strjoin(char **string, int ac)
{
	int	i;
	int	l;

	i = 1;
	l = 0;
	while (i <= ac - 1)
	{
		l += ft_strlen(string[i]);
		if (i <= ac - 2)
			l += 1;
		i++;
	}
	return (l);
}

char	*ft_strjoin(int ac, char **av)
{
	char	*new_str;
	int		i;

	i = 1;
	new_str = malloc(sizeof(char) * get_len_for_strjoin(av, ac) + 1);
	if (!new_str)
		return (free(new_str), NULL);
	new_str[i] = '\0';
	while (i <= ac - 1)
	{
		copy_to_string(ac, new_str, av[i], &i);
		i++;
	}
	return (new_str);
}
