# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 18:01:30 by rharutyu          #+#    #+#              #
#    Updated: 2024/02/02 18:01:31 by rharutyu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./src/ft_isalpha.c \
	./src/ft_isdigit.c \
	./src/ft_isalnum.c \
	./src/ft_isascii.c \
	./src/ft_isprint.c \
	./src/ft_strlen.c \
	./src/ft_memset.c \
	./src/ft_bzero.c \
	./src/ft_memcpy.c \
	./src/ft_memmove.c \
	./src/ft_strlcpy.c \
	./src/ft_strlcat.c \
	./src/ft_toupper.c \
	./src/ft_tolower.c \
	./src/ft_strchr.c \
	./src/ft_strrchr.c \
	./src/ft_strncmp.c \
	./src/ft_memchr.c \
	./src/ft_memcmp.c \
	./src/ft_strnstr.c \
	./src/ft_atoi.c \
	./src/ft_calloc.c \
	./src/ft_strdup.c \
	./src/ft_substr.c \
	./src/ft_strjoin.c \
	./src/ft_strtrim.c \
	./src/ft_split.c \
	./src/ft_itoa.c \
	./src/ft_strmapi.c \
	./src/ft_striteri.c \
	./src/ft_putchar_fd.c \
	./src/ft_putstr_fd.c \
	./src/ft_putendl_fd.c \
	./src/ft_putnbr_fd.c

BONUS = ./bonus/ft_lstnew.c \
		./bonus/ft_lstadd_front.c \
		./bonus/ft_lstsize.c \
		./bonus/ft_lstlast.c \
		./bonus/ft_lstadd_back.c \
		./bonus/ft_lstdelone.c \
		./bonus/ft_lstclear.c \
		./bonus/ft_lstiter.c \
		./bonus/ft_lstmap.c
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)
OBJBONUS=$(BONUS:.c=.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ) $(OBJBONUS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

bonus: $(BONUS) $(OBJBONUS)
	ar rcs $(NAME) $(BONUS) $(OBJBONUS)

.PHONY : clean fclean re bonus 
