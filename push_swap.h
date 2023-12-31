/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:14:12 by youmoukh          #+#    #+#             */
/*   Updated: 2023/12/31 20:48:13 by youmoukh         ###   ########.fr       */
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
	int					nbr;
	struct s_stack_ps	*next;
}	t_stack_ps;

int			main(int ac, char **av);

// basic
long		ft_atoi(char *s);
char		**ft_split(char *s);
char		*ft_strjoin(int ac, char **av);
int			ft_strlen(char *s);

// Parsing
char		**ft_parsing(int ac, char **av);
void		*ft_free_memory(char **string);
void		ft_error_mssg(void);



void		fill_out_stack(char **string_arg, t_stack_ps **stack_a);
t_stack_ps	*new_linked_list(int content);
t_stack_ps	*last_one_linked_list(t_stack_ps *stack_a);
int			size_linked_list(t_stack_ps *a);
void		add_back_linked_list(t_stack_ps *current, t_stack_ps **stack_a);
void		add_front_linked_list(t_stack_ps **stack_a, t_stack_ps *current);
void		clear_stack_linked_list(t_stack_ps **stack_a);

t_stack_ps	*stack_is_sorted(t_stack_ps *a);
t_stack_ps	*sort_the_stack(t_stack_ps *a);


#endif
