/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 10:41:52 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/13 12:01:37 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_lookfor_newline(char *s)
{
	int		i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}

char	*ft_str_join(char *s1, char *s2)
{
	char	*r;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	r = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!r)
		return (free(s1), s1 = NULL, NULL);
	while (s1[j])
		r[i++] = s1[j++];
	j = 0;
	while (s2[j])
		r[i++] = s2[j++];
	r[i] = '\0';
	free (s1);
	free (s2);
	return (r);
}

void	ft_free(char **str, t_stack_ps **s_a, char **s, t_stack_ps **s_b)
{
	ft_free_memory(str);
	ft_free_memory(s);
	clear_stack_linked_list(s_a);
	clear_stack_linked_list(s_b);
}

void	finish_st(char **str, t_stack_ps **s_a, char **s, t_stack_ps **s_b)
{
	if (check_is_sorted(*s_a) && (size_linked_list(s_b) == 0))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	ft_free(str, s_a, s, s_b);
}
