# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 12:08:13 by artvan-d          #+#    #+#              #
#    Updated: 2023/01/26 14:34:48 by artvan-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

RM = rm -rf
CC = gcc
FLAGS = -Wall -Wextra -Werror

INC = \
			push_swap.h \

INCS = $(addprefix -I, $(INC))
			
SRCS = \
			checks/check.c \
			checks/check_utils.c \
			checks/tab.c \
			instructions/push.c \
			instructions/rev_rot.c \
			instructions/rot.c \
			instructions/swap.c \
			algos/do_move.c \
			algos/sort.c \
			algos/init_cost.c \
			algos/init_pos.c \
			push_swap.c \
			edit_stack.c \
			extra_utils.c \
			ft_split.c \
			
OBJS = ${SRCS:.c=.o}

all : ${NAME}

$(NAME) : $(OBJS)
		@$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean :
		${RM} ${OBJS}

fclean : clean 
		${RM} ${NAME}

re : fclean all

%.o: %.c
		${CC} ${FLAGS} -o $@ -c $<