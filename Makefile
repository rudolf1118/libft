SRC = ft_isalpha.c
NAME = libft.a
FLAGS = -Wall -Wextra -Werror -o
AR = ar rcs
OBJ = $(SRC: .c = .o)

all: $(NAME)


$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)
clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
