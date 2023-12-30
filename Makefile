# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/30 10:14:53 by youmoukh          #+#    #+#              #
#    Updated: 2023/12/30 21:06:12 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


 
SRC =	ft_split.c \
		ft_strjoin.c \
		main.c \
		ft_arguments_check.c \
		ft_parsing.c \
		pushswap_functions_0.c \

OBJ =	${SRC:.c=.o}
NAME =	push_swap
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@cc -fsanitize=address -g $(OBJ) -o $(NAME)
	@echo "\033[32mREADY *_*\033[0m"

%.o: %.c push_swap.h
	@cc -fsanitize=address -g ${CFLAGS} -c $< -o $@

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
