/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:15:21 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/12 19:59:44 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	count_strings(char *s, char sep)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == sep)
			s++;
		if (*s)
			i++;
		while (*s && *s != sep)
			s++;
	}
	return (i);
}

char	*ft_create_word(char *s, char sep)
{
	int		i;
	int		len;
	char	*r;

	len = 0;
	while (s[len] && s[len] != sep)
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

char	**ft_split(char *s, char sep)
{
	int		i;
	char	**res;

	i = 0;
	res = malloc(sizeof(char *) * (count_strings(s, sep) + 1));
	if (!res)
		return (NULL);
	while (*s)
	{
		while (*s && *s == sep)
			s++;
		if (*s != '\0')
		{
			res[i] = ft_create_word(s, sep);
			if (res[i++] == NULL)
				ft_free_memory(res);
		}
		while (*s && *s != sep)
			s++;
	}
	res[i] = 0;
	return (res);
}
