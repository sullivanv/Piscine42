#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/17 06:53:48 by suvitiel          #+#    #+#              #
#    Updated: 2016/08/17 07:14:09 by suvitiel         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC		= gcc
NAME	= doop.c fonctions.c fonctions2.c operateurs.c
OUT		= do-op
RM		= rm -f
WFLAGS	= -Wall -Wextra -Werror

all:	$(OUT)

$(OUT):
		$(CC) $(WFLAGS) -o $(OUT) $(NAME)

clean:
		$(RM) $(OUT)