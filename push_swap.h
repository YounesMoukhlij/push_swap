/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younesmoukhlij <younesmoukhlij@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 20:05:01 by younesmoukh       #+#    #+#             */
/*   Updated: 2023/12/29 23:32:57 by younesmoukh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <limits.h>
# include <unistd.h>

// typedef struct s_stack_ps
// {
// 	long				nbr;
// 	struct s_stack_ps	*next;
// }	t_stack_ps;

char		**ft_parsing(int ac, char **av);
int			ft_arguments_check(char **s, int ac);
long		ft_atoi(char *s);
char		**ft_split(char *s);
void		*ft_free_memory(char **string);
char		*ft_strjoin(int ac,char **av);
int			ft_strlen(char *s);
void		ft_error_mssg(void);
// t_stack_ps	*stack_is_sorted(t_stack_ps *a);
// t_stack_ps	*sort_the_stack(t_stack_ps *a);

#endif
