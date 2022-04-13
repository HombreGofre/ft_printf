# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/13 14:54:16 by cnunez-s          #+#    #+#              #
#    Updated: 2022/04/13 15:00:16 by cnunez-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	= libftprintf.a
SRCS	= ft_print.c
OBJS	= $(SRCS:.c=.o)
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
RM		= rm -f

all: $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
re:	fclean al)
	
	fclean:	clean
	$(RM) $(NAME)
re:	fclean all
