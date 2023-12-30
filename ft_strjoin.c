/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 20:53:58 by youmoukh          #+#    #+#             */
/*   Updated: 2023/12/30 21:00:46 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*ft_add(char *r, char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		r[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		r[i] = s2[j];
		i++;
		j++;
	}
	r[i] = '\0';
	return (r);
}

char	*ft_strjoin(char *r, char *s1, char *s2)
{
	// if (!s1 && s2)
	// 	return ((char *)s2);
	// if (!s2 && s1)
	// 	return ((char *)s1);
	// if (!s1 && !s2)
	// 	return (NULL);
	if (!r)
	{
		r = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (!r)
		return (NULL);
	}
	return (ft_add(r, s1, s2));
}