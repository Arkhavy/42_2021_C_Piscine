# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jereverd <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/18 12:17:46 by jereverd          #+#    #+#              #
#    Updated: 2021/09/19 19:16:23 by jereverd         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS 	= main.c ft_error.c ft_split_writer.c tab_struct.c utilities.c ft_parsing.c functions_and_struct.h 

OBJS 	= ${SRCS:.c=.o}

NAME	= rush02

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
	
${NAME}:${OBJS}
		${CC} -o ${NAME} ${OBJS}

all:	${NAME}

clean:
		rm ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
