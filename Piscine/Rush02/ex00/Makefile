# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alsaez <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/19 17:25:53 by alsaez            #+#    #+#              #
#    Updated: 2022/11/19 18:16:05 by alsaez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.c			\
			ft_check.c		\
			ft_numbers.c	\
			ft_search.c		\
			ft_solve.c		\
			ft_atoi_str.c	\
			libft.c			\

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

CC		= cc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -g3

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
