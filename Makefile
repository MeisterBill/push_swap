# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 12:08:13 by artvan-d          #+#    #+#              #
#    Updated: 2023/01/26 12:08:16 by artvan-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = instructions/main-test.c instructions/swap.c instructions/push.c instructions/rotate.c instructions/reverse_rotate.c extra_utils.c algos/sort.c

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
