# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alsaez <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 10:47:17 by alsaez            #+#    #+#              #
#    Updated: 2023/03/21 16:41:24 by alsaez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra

NAME = minitalk.a

EXEC_CLIENT = client
EXEC_SERVER = server
SRC_CLIENT = client.c
SRC_SERVER = server.c
OBJ_CLIENT = ${SRC_CLIENT:.c=.o} 
OBJ_SERVER = ${SRC_SERVER:.c=.o}
    
all: $(NAME)  clean

$(NAME):
	 @make -C libft/
	 @mv libft/libft.a ${NAME}
	 @gcc -c ${FLAGS} ${SRC_CLIENT} ${SRC_SERVER}
	 @ar rc ${NAME} ${OBJ_CLIENT} ${OBJ_SERVER}
	 @gcc ${FLAGS} ${SRC_CLIENT} ${NAME} -o ${EXEC_CLIENT}
	 @gcc ${FLAGS} ${SRC_SERVER} ${NAME} -o ${EXEC_SERVER}
    
clean:
	@make clean -C libft/
	@rm -f ${OBJ_CLIENT} ${OBJ_SERVER}

fclean:
	@make clean -C libft/
	@rm -f ${OBJ_CLIENT} ${OBJ_SERVER}
	@rm -f ${NAME} ${EXEC_CLIENT} ${EXEC_SERVER}

re: fclean all

.PHONY : all clean fclean $(NAME)
