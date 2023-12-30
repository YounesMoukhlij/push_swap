/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younesmoukhlij <younesmoukhlij@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:14:12 by youmoukh          #+#    #+#             */
/*   Updated: 2023/12/30 23:46:49 by younesmoukh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_stack_ps
{
	long				nbr;
	struct s_stack_ps	*next;
}	t_stack_ps;

int			main(int ac, char **av);
char		**ft_parsing(int ac, char **av);
int			ft_arguments_check(char **s, int ac);

long		ft_atoi(char *s);
char		**ft_split(char *s);
void		*ft_free_memory(char **string);
char		*ft_strjoin(int size, char **strs);
int			ft_strlen(char *s);
void		ft_error_mssg(void);
t_stack_ps	*stack_is_sorted(t_stack_ps *a);
t_stack_ps	*sort_the_stack(t_stack_ps *a);
char		*copy_to_string(char **av, char *res, int ac);


int	ft_length(char **str, int size);
#endif
