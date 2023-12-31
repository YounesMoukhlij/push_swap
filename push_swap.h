/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:14:12 by youmoukh          #+#    #+#             */
/*   Updated: 2023/12/31 15:49:00 by youmoukh         ###   ########.fr       */
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
int			ft_arguments_check(char **s);
long		ft_atoi(char *s);
char		**ft_split(char *s);
void		*ft_free_memory(char **string);
char		*ft_strjoin(int ac, char **av);
int			ft_strlen(char *s);
void		ft_error_mssg(void);
t_stack_ps	*stack_is_sorted(t_stack_ps *a);
t_stack_ps	*sort_the_stack(t_stack_ps *a);


int			ft_check_emptiness(char *s);
#endif