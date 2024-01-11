# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/10 19:15:01 by youmoukh          #+#    #+#              #
#    Updated: 2024/01/11 21:42:04 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	main.c    \
		ft_split.c \
		swap_move.c \
		push_move.c	 \
		ft_parsing.c  \
		ft_strjoin.c   \
		rotate_move.c   \
		get_next_line.c  \
		fill_out_stack.c  \
		checker_str_moves.c \
		reverse_rotate_move.c\
		get_next_line_utils.c \
		pushswap_functions_0.c \
		pushswap_functions_1.c  \
		pushswap_functions_2.c  \

OBJ =	${SRC:.c=.o}
NAME =	checker
CFLAGS = -Wall -Wextra -Werror
Header = push_swap_bonus.h

all: $(NAME)

%.o : %.c ${Header}
	@cc ${CFLAGS} -c $< -o $@

$(NAME): $(OBJ)
	@cc $(OBJ) -o $(NAME)
	@echo "\033[32mRRRRRREADY !!!!\033[1;91m\t[*_!]\033[0m"

clean :
	@rm -rf $(OBJ)
	@echo "\033[32m >>>> [Cleaned Successfully]\033[0m"

fclean : clean
	@rm -rf $(NAME)
	@echo "\033[34m >>>> [F-cleaned Successfully]\033[0m"

e : all clean

re : fclean all

.PHONY : all clean fclean re