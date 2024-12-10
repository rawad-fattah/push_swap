# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rabdel-f <rabdel-f@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/13 17:09:48 by rabdel-f          #+#    #+#              #
#    Updated: 2024/08/20 11:31:26 by rabdel-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
LIBFTDIR = libft/

SRC_1 = srcs/push_swap.c \

SRC_2 =	srcs/parse_arguments.c \
		srcs/free_and_check_utils.c \
		srcs/ft_stack_new.c \
		srcs/nbr_operations_a_to_b.c \
		srcs/nbr_operations_b_to_a.c \
		srcs/ft_rotate_and_push.c \
		srcs/operations_1.c \
		srcs/operations_2.c \
		srcs/operations_3.c \
		srcs/lst_utils.c \
		srcs/target_node.c \
		srcs/ft_sort.c \
		srcs/cost.c \
		
OBJ_1 = ${SRC_1:.c=.o}
OBJ_2 = ${SRC_2:.c=.o}

INCLUDE = -L ./libft -lft

.c.o:
	${CC} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ_1} ${OBJ_2}
	make -C $(LIBFTDIR)
	${CC} ${FLAGS} ${OBJ_1} ${OBJ_2} -o ${NAME} ${INCLUDE}

all: ${NAME}

clean:
	${RM} ${OBJ_1} ${OBJ_2}
	@cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
	${RM} ${OBJ_1} ${OBJ_2} ${NAME}
	@cd $(LIBFTDIR) && $(MAKE) fclean

re: clean all

.PHONY: all clean fclean re