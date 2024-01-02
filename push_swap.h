/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:14:12 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/02 20:50:16 by youmoukh         ###   ########.fr       */
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
t_stack_ps	*ft_beforelast(t_stack_ps *stack);
t_stack_ps	*new_linked_list(int content);
t_stack_ps	*last_one_linked_list(t_stack_ps *stack_a);
int			size_linked_list(t_stack_ps *a);
void		add_back_linked_list(t_stack_ps *current, t_stack_ps **stack_a);
void		add_front_linked_list(t_stack_ps **stack_a, t_stack_ps *current);
void		clear_stack_linked_list(t_stack_ps **stack_a);
t_stack_ps	*stack_is_sorted(t_stack_ps *a);
t_stack_ps	*sort_the_stack(t_stack_ps *a);
// ********** MOVES **********
// Rotate Moves
void		rotate_move(t_stack_ps	**the_stack);
void		rotate_a(t_stack_ps **stack_a);
void		rotate_b(t_stack_ps **stack_b);
void		rotate_stack_a_b(t_stack_ps **stack_a, t_stack_ps **stack_b);
// REVERSE ROTATE 
void		reverse_rotate_a(t_stack_ps **stack_a);
void		reverse_rotate_b(t_stack_ps **stack_b);
void		reverse_rotate_a_b(t_stack_ps **stack_a, t_stack_ps **stack_b);
// SWAP Moves
void		swap_move(t_stack_ps **the_stack);
void		swap_stack_a_b(t_stack_ps **stack_a, t_stack_ps **stack_b);
void		swap_a(t_stack_ps **stack_a);
void		swap_b(t_stack_ps **stack_b);
void		reverse_rotate_move(t_stack_ps	**the_stack);
// SORT 
void		sort_simple_three(int ac, t_stack_ps **stack_a);
void		sort_big_stacks(t_stack_ps **stack_a, t_stack_ps **stack_b);
void		sort_simple_five(t_stack_ps **stack_a, t_stack_ps **stack_b);
int			check_is_sorted(t_stack_ps *stack);
#endif
