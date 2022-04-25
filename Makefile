# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/25 11:44:34 by cnunez-s          #+#    #+#              #
#    Updated: 2022/04/25 14:00:36 by cnunez-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c c_case.c s_case.c d_i_case.c p_case.c u_case.c x_X_case.c
OBJS	=	${SRCS:.c=.o}
NAME	=	libftprintf.a
CC			=	gcc
AR			=	ar rc
CFLAGS	=	-Wall -Werror -Wextra
.c.o:
		${CC} ${CFLAGS} -c ${SRCS}
all:	${NAME}
$(NAME):	${OBJS}
	${AR} ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}
fclean:
		${RM} ${NAME}
re:		fclean clean
.PHONY: all clean fclean re
