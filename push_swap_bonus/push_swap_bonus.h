/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:22:15 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/13 14:54:21 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

typedef struct s_stack_ps
{
	int					nbr;
	struct s_stack_ps	*next;
}	t_stack_ps;

long		ft_atoi(char *s);
char		*main_helper(void);
int			ft_strlen(char *s);
void		ft_error_mssg(void);
char		*get_next_line(int fd);
int			main(int ac, char **av);
int			is_valid_move(char **str);
void		is_valid_before(char *str);
int			is_valid_move(char **str);
int			ft_lookfor_newline(char *s);
void		swap_a(t_stack_ps **stack_a);
void		swap_b(t_stack_ps **stack_b);
t_stack_ps	*new_linked_list(int content);
char		**ft_split(char *s, char sep);
int			ft_strcmp(char *s1, char *s2);
int			ft_strcmp(char *s1, char *s2);
char		*ft_strjoin(int ac, char **av);
void		rotate_a(t_stack_ps **stack_a);
void		*ft_free_memory(char **string);
void		rotate_b(t_stack_ps **stack_b);
t_stack_ps	*stack_is_sorted(t_stack_ps *a);
char		**ft_parsing(int ac, char **av);
char		*ft_str_join(char *s1, char *s2);
char		*ft_str_join(char *s1, char *s2);
t_stack_ps	*ft_beforelast(t_stack_ps *stack);
void		swap_move(t_stack_ps **the_stack);
int			check_is_sorted(t_stack_ps *stack);
void		rotate_move(t_stack_ps	**the_stack);
void		reverse_rotate_b(t_stack_ps **stack_b);
void		reverse_rotate_a(t_stack_ps **stack_a);
int			size_linked_list(t_stack_ps **stack_a);
t_stack_ps	*last_one_linked_list(t_stack_ps *stack_a);
t_stack_ps	*locate_the_node(t_stack_ps **stack, int i);
void		reverse_rotate_move(t_stack_ps	**the_stack);
void		clear_stack_linked_list(t_stack_ps **stack_a);
void		push_move_b(t_stack_ps **stack_a, t_stack_ps **stack_b);
void		push_move_a(t_stack_ps **stack_a, t_stack_ps **stack_b);
void		fill_out_stack(char **string_arg, t_stack_ps **stack_a);
void		swap_stack_a_b(t_stack_ps **stack_a, t_stack_ps **stack_b);
void		rotate_stack_a_b(t_stack_ps **stack_a, t_stack_ps **stack_b);
void		reverse_rotate_a_b(t_stack_ps **stack_a, t_stack_ps **stack_b);
void		add_back_linked_list(t_stack_ps *current, t_stack_ps **stack_a);
void		add_front_linked_list(t_stack_ps **stack_a, t_stack_ps *current);
void		ft_free(char **str, t_stack_ps **s_a, char **s, t_stack_ps **s_b);
void		finish_st(char **str, t_stack_ps **s_a, char **s, t_stack_ps **s_b);
void		check_entred_moves(char **move, t_stack_ps **s_a, t_stack_ps **s_b);
#endif