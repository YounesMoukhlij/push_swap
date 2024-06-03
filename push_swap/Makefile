# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/30 10:14:53 by youmoukh          #+#    #+#              #
#    Updated: 2024/01/17 11:12:18 by youmoukh         ###   ########.fr        #
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

OBJ =	${SRC:.c=.o}

NAME =	push_swap

CFLAGS = -Wall -Wextra -Werror

mendatory_header = push_swap.h

bonus_file = push_swap_bonus

all: $(NAME)

%.o: %.c ${mendatory_header}
	cc ${CFLAGS} -c $< -o $@

$(NAME): $(OBJ) ${mendatory_header}
	cc $(OBJ) -o $(NAME)
	@echo "\033[32mRRRRRREADY !!!!\033[1;91m\t[*_!]\033[0m"

clean :
	@rm -rf $(OBJ)
	@echo "\033[32m >>>> [Cleaned   Successfully]\033[0m"

fclean : clean
	@rm -rf $(NAME)
	@echo "\033[34m >>>> [F-cleaned Successfully]\033[0m"

re : fclean all

.PHONY : all clean fclean re
