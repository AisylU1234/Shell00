# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crossart <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/27 18:44:23 by crossart          #+#    #+#              #
#    Updated: 2020/09/29 12:30:58 by crossart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ft_display_file

SRCS		= ./main.c

OBJS		= ${SRCS:.c=.o}

GCC			= gcc
RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

.c.o:
			${GCC} ${CFLAGS} -c ${SRCS}

${NAME}:	${OBJS}
			${GCC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
