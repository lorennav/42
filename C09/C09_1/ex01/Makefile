# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvieira <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/09 16:13:36 by lvieira           #+#    #+#              #
#    Updated: 2020/11/10 21:59:11 by lvieira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c \
	   srcs/ft_strcmp.c

OBJS	= ${SRCS:.c=.o}

INCLUDES	= includes/ft.h

NAME	= libft.a

FLAGS	= -Wall -Wextra -Werror

RM		= rm -f

CC 		= gcc

.c.o:
		${CC} ${FLAGS} -I ${INCLUDES} -c $< -o ${<:.c=.o}


${NAME}: ${OBJS}	
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

all: 	${NAME}

clean:
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
