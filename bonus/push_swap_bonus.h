/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:22:15 by youmoukh          #+#    #+#             */
/*   Updated: 2024/01/11 22:35:59 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <limits.h>
# include <string.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

typedef struct s_stack_ps
{
	int					nbr;
	struct s_stack_ps	*next;
}	t_stack_ps;

void		ft_free(char **str, t_stack_ps **s_a, char **s, t_stack_ps **s_b);
int			main(int ac, char **av);
int			ft_lookfor_newline(char *s);
char		*ft_str_join(char *s1, char *s2);
char		*get_next_line(int fd);
void		check_entred_moves(char **move, t_stack_ps **s_a, t_stack_ps **s_b);
long		ft_atoi(char *s);
char		**ft_split(char *s, char sep);
char		*ft_strjoin(int ac, char **av);
int			ft_strlen(char *s);

void		rotate_move(t_stack_ps	**the_stack);
void		rotate_a(t_stack_ps **stack_a);
void		rotate_b(t_stack_ps **stack_b);
void		rotate_stack_a_b(t_stack_ps **stack_a, t_stack_ps **stack_b);
void		reverse_rotate_a(t_stack_ps **stack_a);
void		reverse_rotate_b(t_stack_ps **stack_b);
void		reverse_rotate_a_b(t_stack_ps **stack_a, t_stack_ps **stack_b);
void		swap_move(t_stack_ps **the_stack);
void		swap_stack_a_b(t_stack_ps **stack_a, t_stack_ps **stack_b);
void		swap_a(t_stack_ps **stack_a);
void		swap_b(t_stack_ps **stack_b);
void		reverse_rotate_move(t_stack_ps	**the_stack);
char		**ft_parsing(int ac, char **av);
void		*ft_free_memory(char **string);
void		ft_error_mssg(void);
void		fill_out_stack(char **string_arg, t_stack_ps **stack_a);
t_stack_ps	*ft_beforelast(t_stack_ps *stack);
t_stack_ps	*new_linked_list(int content);
t_stack_ps	*last_one_linked_list(t_stack_ps *stack_a);
int			size_linked_list(t_stack_ps **stack_a);
void		add_back_linked_list(t_stack_ps *current, t_stack_ps **stack_a);
void		add_front_linked_list(t_stack_ps **stack_a, t_stack_ps *current);
void		clear_stack_linked_list(t_stack_ps **stack_a);
t_stack_ps	*stack_is_sorted(t_stack_ps *a);
t_stack_ps	*locate_the_node(t_stack_ps **stack, int i);
int			ft_strcmp(char *s1, char *s2);
int			check_is_sorted(t_stack_ps *stack);
int			is_valid_move(char **str);
void		push_move_b(t_stack_ps **stack_a, t_stack_ps **stack_b);
void		push_move_a(t_stack_ps **stack_a, t_stack_ps **stack_b);
int			ft_strcmp(char *s1, char *s2);
char		*main_helper(void);
int			is_valid_move(char **str);
void		finish_st(char **str, t_stack_ps **s_a, char **s, t_stack_ps **s_b);
char		*ft_str_join(char *s1, char *s2);
void		is_valid_before(char *str);
#endif