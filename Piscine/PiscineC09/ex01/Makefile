# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alsaez <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 12:59:25 by alsaez            #+#    #+#              #
#    Updated: 2022/11/21 13:32:52 by alsaez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_putchar.c	\
      srcs/ft_swap.c	\
      srcs/ft_putstr.c	\
      srcs/ft_strlen.c	\
      srcs/ft_strcmp.c	\

NAME = libft.a
INCDS = includes
OBJECTS = ${SRC:.c=.o}

CC = gcc

FLAGS = -Wall -Wextra -Werror

RM = rm -f

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${INCDS}

${NAME}: ${OBJECTS}
	ar rc ${NAME} ${OBJECTS}


all: ${NAME}

clean:
	${RM} ${OBJECTS}

fclean: clean
	${RM} ${NAME}

re: fclean all
