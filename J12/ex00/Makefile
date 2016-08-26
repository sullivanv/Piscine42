#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/19 05:47:46 by suvitiel          #+#    #+#              #
#    Updated: 2016/08/19 07:28:48 by suvitiel         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC		= gcc
NAME	= main.c
OUT		= ft_display_file
RM		= rm -f
WFLAGS	= -Wall -Wextra -Werror
OBJS	= main.o

all:	$(OUT)

$(OUT):
		$(CC) -c $(NAME)
		$(CC) $(WFLAGS) -o $(OUT) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(OUT)