/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:15:21 by youmoukh          #+#    #+#             */
/*   Updated: 2023/12/31 11:44:36 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_strings(char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == ' ')
			s++;
		if (*s)
			i++;
		while (*s && *s != ' ')
			s++;
	}
	return (i);
}

char	*ft_create_word(char *s)
{
	int		i;
	int		len;
	char	*r;

	len = 0;
	while (s[len] && s[len] != ' ')
		len++;
	r = malloc(len + 1);
	if (!r)
		return (NULL);
	i = 0;
	while (i < len)
	{
		r[i] = s[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}

char	**ft_split(char *s)
{
	int		i;
	char	**res;

	i = 0;
	res = malloc(sizeof(char *) * (count_strings(s) + 1));
	if (!res)
		return (NULL);
	while (*s)
	{
		while (*s && *s == ' ')
			s++;
		if (*s != '\0')
		{
			res[i] = ft_create_word(s);
			if (res[i++] == NULL)
				ft_free_memory(res);
		}
		while (*s && *s != ' ')
			s++;
	}
	res[i] = 0;
	return (res);
}
