#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/16 08:16:35 by suvitiel          #+#    #+#              #
#    Updated: 2016/08/17 03:55:18 by suvitiel         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC		= gcc
NAME	= libft.a
SRC		= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_strcmp.c srcs/ft_strlen.c \
				srcs/ft_putstr.c
RM		= rm -f
OBJS	= ft_putchar.o ft_strcmp.o ft_strlen.o ft_putstr.o ft_swap.o
HEAD	= ./includes/

all:	$(NAME)

$(NAME):
		$(CC) -c $(SRC) -I $(HEAD)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all