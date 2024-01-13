# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/30 10:14:53 by youmoukh          #+#    #+#              #
#    Updated: 2024/01/13 17:02:53 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	main.c    \
		ft_split.c \
		swap_move.c \
		push_move.c	 \
		ft_parsing.c  \
		algo_cases.c   \
		ft_strjoin.c    \
		rotate_move.c    \
		fill_out_stack.c  \
		sort_big_stacks.c  \
		sort_simple_five.c  \
		sort_simple_three.c  \
		reverse_rotate_move.c \
		subsquence_algorithm.c \
		pushswap_functions_0.c  \
		pushswap_functions_1.c   \
		pushswap_functions_2.c    \
		pushswap_functions_3.c     \
		pushswap_functions_4.c      \
		pushswap_functions_5.c       \

SRC_B =	push_move_bonus/main_bonus.c     \
		push_move_bonus/ft_split_bonus.c  \
		push_move_bonus/swap_move_bonus.c  \
		push_move_bonus/push_move_bonus.c	\
		push_move_bonus/ft_parsing_bonus.c   \
		push_move_bonus/ft_strjoin_bonus.c    \
		push_move_bonus/rotate_move_bonus.c    \
		push_move_bonus/get_next_line_bonus.c   \
		push_move_bonus/fill_out_stack_bonus.c   \
		push_move_bonus/checker_str_moves_bonus.c \
		push_move_bonus/reverse_rotate_move_bonus.c\
		push_move_bonus/get_next_line_utils_bonus.c \
		push_move_bonus/pushswap_functions_0_bonus.c \
		push_move_bonus/pushswap_functions_1_bonus.c  \
		push_move_bonus/pushswap_functions_2_bonus.c   \

OBJ =	${SRC:.c=.o}
OBJ_B =	${SRC_B:.c=.o}
NAME =	push_swap
NAME_B = checker
CFLAGS = -Wall -Wextra -Werror
bonus_header = push_swap_bonus/push_swap_bonus.h
mendatory_header = push_swap.h

all: $(NAME)

%.o: %.c ${mendatory_header}
	@cc ${CFLAGS} -c $< -o $@

%_bonus.o: %_bonus.c ${bonus_header}
	@cc ${CFLAGS} -c $< -o $@

bonus : $(OBJ_B) ${bonus_header}
	@cc $(OBJ_B) -o $(NAME_B)

$(NAME): $(OBJ) ${mendatory_header}
	@cc $(OBJ) -o $(NAME)
	@echo "\033[32mRRRRRREADY !!!!\033[1;91m\t[*_!]\033[0m"

clean :
	@rm -rf $(OBJ)
	@rm -rf push_swap_bonus/*.o
	@echo "\033[32m >>>> [Cleaned   Successfully]\033[0m"

fclean : clean
	@rm -rf $(NAME)
	@rm -rf push_move_bonus/checker
	@echo "\033[34m >>>> [F-cleaned Successfully]\033[0m"

re : fclean all

.PHONY : all clean fclean re
