# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/30 10:14:53 by youmoukh          #+#    #+#              #
#    Updated: 2024/01/16 11:57:46 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_B =	main_bonus.c     \
		ft_split_bonus.c  \
		swap_move_bonus.c  \
		push_move_bonus.c	\
		ft_parsing_bonus.c   \
		ft_strjoin_bonus.c    \
		rotate_move_bonus.c    \
		get_next_line_bonus.c   \
		fill_out_stack_bonus.c   \
		checker_str_moves_bonus.c \
		reverse_rotate_move_bonus.c\
		get_next_line_utils_bonus.c \
		pushswap_functions_0_bonus.c \
		pushswap_functions_1_bonus.c  \
		pushswap_functions_2_bonus.c   \

OBJ_B =	${SRC_B:.c=.o}     
NAME = checker
CFLAGS = -Wall -Wextra -Werror           
bonus_header = push_swap_bonus.h        

all: $(NAME)

%.o: %.c ${bonus_header}
	cc ${CFLAGS} -c $< -o $@

$(NAME): $(OBJ_B) ${bonus_header}
	cc $(OBJ_B) -o $(NAME)
	@echo "\033[32mRRRRRREADY !!!!\033[1;91m\t[*_!]\033[0m"

clean :
	@rm -rf $(OBJ_B)
	@echo "\033[32m >>>> [Bonus Cleaned Successfully]\033[0m"

fclean : clean
	@rm -rf $(NAME)
	@echo "\033[34m >>>> [Bonus F-Cleaned Successfully]\033[0m"

re : fclean all

.PHONY : all clean fclean re
