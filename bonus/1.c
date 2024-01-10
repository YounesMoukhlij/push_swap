/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:11:52 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/10 18:15:16 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

char	*get_rest(char *str)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	j = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
		return (free (str), str = NULL, NULL);
	s = malloc((ft_strlen(str) - i) + 1);
	if (!s)
		return (free (s), s = NULL, NULL);
	i++;
	while (str[i])
	{
		s[j] = str[i];
		i++;
		j++;
	}
	s[j] = '\0';
	free(str);
	return (s);
}

char	*get_line(char *str)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	j = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	s = malloc(i + 1);
	if (!s)
		return (free(s), s = NULL, NULL);
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}

char	*read_from_fd(int fd, char *str, int i)
{
	char	*buffer;

	while (ft_lookfor_newline(str) && i > 0)
	{
		buffer = malloc(sizeof(BUFFER_SIZE) + 1);
		if (!buffer)
			return (free(buffer), buffer = NULL, NULL);
		i = read (fd, buffer, BUFFER_SIZE);
		if (i < 0)
			return (free(buffer), free(str), NULL);
		if (i == 0)
		{
			free(buffer);
			break ;
		}
		buffer[i] = '\0';
		str = ft_str_join(str, buffer);
		if (!str)
			return (free (str), str = NULL, NULL);
	}
	if (!ft_strlen(str))
		return (free (str), str = NULL, NULL);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*read_line;
	char		*final_str;
	int			i;

	i = 1;
	if (BUFFER_SIZE <= 0)
		return (0);
	if (!read_line)
	{
		read_line = malloc(1);
		if (!read_line)
			return (free (read_line), NULL);
		read_line[0] = '\0';
	}
	read_line = read_from_fd(fd, read_line, i);
	if (read_line == NULL)
		return (free(read_line), read_line = NULL, NULL);
	final_str = get_line(read_line);
	if (!final_str)
		return (free(final_str), final_str = NULL, NULL);
	read_line = get_rest(read_line);
	if (!read_line)
		return (free (read_line), read_line = NULL, NULL);
	return (final_str);
}
