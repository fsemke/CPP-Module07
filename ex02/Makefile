# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsemke <fsemke@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 15:32:49 by fsemke            #+#    #+#              #
#    Updated: 2023/01/23 12:09:16 by fsemke           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= array
CC		:= g++
CFLAGS	:= -Wall -Wextra -Werror -std=c++98 -Wunused -g

SRCS	= 	main.cpp

OBJS	=	$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.phony: all clean fclean re