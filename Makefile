
SRC =	ft_strjoin.c \
		ft_split.c \
		main.c \
		ft_arguments_check.c \
		ft_parsing.c \

OBJ =	${SRC:.o=.c}
NAME =	push_swap

all: $(NAME)

$(NAME): $(OBJ)
	@cc $(OBJ) -o $(NAME)
	echo "READY *_*"


%.o: %.c push_swap.h
	$cc -Wall -Wextra -Werror -c $< -o $@

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME) push_swap

re : fclean all

.PHONY : all clean fclean re
