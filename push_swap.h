/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:14:12 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/13 17:00:15 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_stack_ps
{
	int					nbr;
	int					flag;
	int					position;
	int					index_in_stack;
	struct s_stack_ps	*target_node;
	struct s_stack_ps	*next;
	int					moves;
}	t_stack_ps;

long		ft_atoi(char *s);
int			ft_strlen(char *s);
void		ft_error_mssg(void);
char		**ft_split(char *s);
int			main(int ac, char **av);
int			max(int *arr, int index);
void		swap_a(t_stack_ps **stack_a);
void		swap_b(t_stack_ps **stack_b);
t_stack_ps	*new_linked_list(int content);
t_stack_ps	*sort_the_stack(t_stack_ps *a);
void		*ft_free_memory(char **string);
char		*ft_strjoin(int ac, char **av);
void		fill_moves(t_stack_ps **stack);
void		rotate_b(t_stack_ps **stack_b);
void		rotate_a(t_stack_ps **stack_a);
t_stack_ps	*stack_is_sorted(t_stack_ps *a);
char		**ft_parsing(int ac, char **av);
int			size_linked_list(t_stack_ps *a);
int			check_stack(t_stack_ps **stack_a);
t_stack_ps	*ft_beforelast(t_stack_ps *stack);
void		swap_move(t_stack_ps **the_stack);
int			check_is_sorted(t_stack_ps *stack);
t_stack_ps	*find_min_node(t_stack_ps **stack_a);
void		rotate_move(t_stack_ps	**the_stack);
t_stack_ps	*gest_best_move(t_stack_ps **stack_b);
void		reverse_rotate_a(t_stack_ps **stack_a);
void		reverse_rotate_b(t_stack_ps **stack_b);
int			find_max_value_node(t_stack_ps **stack_a);
int			find_min_value_node(t_stack_ps **stack_a);
t_stack_ps	*last_one_linked_list(t_stack_ps *stack_a);
t_stack_ps	*locate_the_node(t_stack_ps **stack, int i);
void		find_the_minimum_node(t_stack_ps **stack_a);
int			*full_fill_arr_with_1(t_stack_ps **stack_a);
void		reverse_rotate_move(t_stack_ps	**the_stack);
void		clear_stack_linked_list(t_stack_ps **stack_a);
void		fill_out_stack_position(t_stack_ps **stack_a);
t_stack_ps	*find_minimum_move(int i, t_stack_ps **stack);
t_stack_ps	*find_target(t_stack_ps **stack_a, int content);
void		sort_simple_three(t_stack_ps **stack_a);
int			*full_fill_arr_with_stack(t_stack_ps **stack_a);
void		fill_out_stack(char **string_arg, t_stack_ps **stack_a);
void		push_move_b(t_stack_ps **stack_a, t_stack_ps **stack_b);
void		push_move_a(t_stack_ps **stack_a, t_stack_ps **stack_b);
void		swap_stack_a_b(t_stack_ps **stack_a, t_stack_ps **stack_b);
void		check_best_move(t_stack_ps **stack_b, t_stack_ps **stack_a);
void		case_1(t_stack_ps **s_b, t_stack_ps **s_a, t_stack_ps *b_n);
void		case_2(t_stack_ps **s_b, t_stack_ps **s_a, t_stack_ps *b_n);
void		case_3(t_stack_ps **s_b, t_stack_ps **s_a, t_stack_ps *b_n);
void		case_4(t_stack_ps **s_b, t_stack_ps **s_a, t_stack_ps *b_n);
void		sort_big_stacks(t_stack_ps **stack_a, t_stack_ps **stack_b);
void		sort_simple_five(t_stack_ps **stack_a, t_stack_ps **stack_b);
void		fill_out_stack_b(t_stack_ps **stack_a, t_stack_ps **stack_b);
void		rotate_stack_a_b(t_stack_ps **stack_a, t_stack_ps **stack_b);
void		set_connection_a_b(t_stack_ps **stack_a, t_stack_ps **stack_b);
void		reverse_rotate_a_b(t_stack_ps **stack_a, t_stack_ps **stack_b);
void		add_back_linked_list(t_stack_ps *current, t_stack_ps **stack_a);
void		subsquence_algo(t_stack_ps **stack, int *arr_1, int *arr_stack);
void		add_front_linked_list(t_stack_ps **stack_a, t_stack_ps *current);

#endif