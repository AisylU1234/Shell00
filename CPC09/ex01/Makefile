# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crossart <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/27 18:44:23 by crossart          #+#    #+#              #
#    Updated: 2020/09/27 19:24:43 by crossart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ./srcs/*.c
OBJS	= ${SRCS:.c=.o}
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a
HEADER	= ./includes/
INCLUDES = -I $(HEADER)
all: $(NAME)
$(NAME):
	$(CC) -c $(CFLAGS) $(INCLUDES) $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
clean:
	rm -f $(OBJS)

fcclean: clean
	rm -f $(NAME)

re: fclean all

