# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/13 14:54:16 by cnunez-s          #+#    #+#              #
#    Updated: 2022/04/22 19:45:08 by cnunez-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	= libftprintf.a
SRCS	= ft_print.c	\
		  c_case.c		\
		  s_case.c		\
		  p_case.c		\
		  x_X_case.c	\
		  d_i_case.c	\
		  u_case.c		\
OBJS	= $(SRCS:.c=.o)
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
RM		= rm -f

all: $(NAME)

$(NAME) : $(OBJS)
	$(NAME) $()
clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
re:	fclean all
	
	fclean:	clean
	$(RM) $(NAME)
re:	fclean all
