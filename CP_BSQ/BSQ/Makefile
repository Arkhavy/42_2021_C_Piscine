# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/21 18:09:22 by ljohnson          #+#    #+#              #
#    Updated: 2021/09/22 13:35:30 by ljohnson         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS = main.c cond.c ft_split.c incr_y.c maxy.c tools1.c ft_readfile.c gr.c maxx.c recu.c ft_struct.c ft_free.c ft_free_struct.c display.c
HEADERS = bsqlib.h
OBJS = ${SRCS:.c=.o}
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

.c.o:
	${CC} ${CFLAGS} -I ${HEADERS} -c $< -o ${<:.c=.o}
all: ${OBJS} 
		${CC} -o bsq ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} bsq

re: fclean all

.PHONY: all clean fclean re
