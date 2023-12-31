# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/30 10:14:53 by youmoukh          #+#    #+#              #
#    Updated: 2023/12/31 20:27:49 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	main.c \
		ft_split.c \
		ft_strjoin.c \
		ft_parsing.c \
		fill_out_stack.c \
		pushswap_functions_0.c \
		pushswap_functions_1.c \

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
