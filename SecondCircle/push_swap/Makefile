# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alsaez <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/30 16:30:30 by alsaez            #+#    #+#              #
#    Updated: 2023/04/26 09:26:05 by alsaez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra

NAME = push_swap.a

NAMECHK = checker.a

EXEC = push_swap

CHECK = checker

SRC = src/push.c \
	src/swap.c \
	src/main.c \
	src/memory.c \
	src/rotate.c \
	src/r_rotate.c \
	src/algo_clean.c \
	src/algo_utils.c \
	src/utils_clean.c \
	src/utils_clean2.c \
	src/utils_clean3.c \
	src/memory2.c

SRCCHK = src/cpush.c \
	src/cswap.c \
	src/main2.c \
	src/memory.c \
	src/crotate.c \
	src/cr_rotate.c \
	src/algo_clean.c \
	src/algo_utils.c \
	src/utils_clean.c \
	src/utils_clean2.c \
	src/utils_clean3.c \
	src/memory2.c

	
OBJ = ${SRC:.c=.o} 

OBJCHK = ${SRCCHK:.c=.o}	

all: $(NAME)

bonus: ${NAME} ${NAMECHK}

$(NAME): ${OBJ}
	make -C libft/
	mv libft/libft.a ${NAME}
	ar rc ${NAME} ${OBJ}
	gcc ${FLAGS} ${SRC} ${NAME} -o ${EXEC}

$(NAMECHK): ${OBJCHK}	
	make -C libft/
	mv libft/libft.a ${NAMECHK}
	ar rc ${NAMECHK} ${OBJCHK}
	gcc ${FLAGS} ${SRCCHK} ${NAMECHK} -o ${CHECK}

%.o: %.c
	gcc ${FLAGS} -c $< -o $@

clean:
	make clean -C libft/
	rm -f ${OBJ}
	rm -f ${OBJCHK}

fclean: clean
	rm -f ${NAME} ${EXEC}
	rm -f ${NAMECHK} ${CHECK}


re: fclean all
