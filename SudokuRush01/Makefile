#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/13 14:02:38 by suvitiel          #+#    #+#              #
#    Updated: 2016/08/14 22:07:37 by suvitiel         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC		= cc
NAME	= *.c
OUT		= colle-1
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
