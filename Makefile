# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/30 10:14:53 by youmoukh          #+#    #+#              #
#    Updated: 2024/01/03 16:33:35 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	main.c   \
		ft_split.c\
		swap_move.c\
		push_move.c	\
		ft_parsing.c \
		ft_strjoin.c  \
		rotate_move.c  \
		fill_out_stack.c \
		sort_simple_five.c \
		sort_simple_three.c \
		reverse_rotate_move.c\
		pushswap_functions_0.c\
		pushswap_functions_1.c \
		pushswap_functions_2.c  \
		# sort_big_stacks.c \

OBJ =	${SRC:.c=.o}
NAME =	push_swap
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c push_swap.h
	@cc ${CFLAGS} -c $< -o $@

$(NAME): $(OBJ)
	@cc $(OBJ) -o $(NAME)
	@echo "\033[32mREADY *_*\033[0m"

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
