#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/13 14:02:38 by suvitiel          #+#    #+#              #
#    Updated: 2016/08/21 23:33:01 by suvitiel         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC		= cc
NAME	= parsefichier.c main.c function.c functions2.c algocolle.c parse2.c
OUT		= colle-2
RM		= rm -f
WFLAGS	= -Wall -Wextra -Werror

all:	$(OUT)

$(OUT):
	$(CC) $(WFLAGS) -o $(OUT) $(NAME)

clean:	
	$(RM) *~

norme:	
	norminette $(NAME) *.h

fclean:	clean
	$(RM) $(OUT)

re:	fclean all
