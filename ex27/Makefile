# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akrushin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/27 19:23:48 by akrushin          #+#    #+#              #
#    Updated: 2017/12/27 19:23:50 by akrushin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CC = gcc

CFLAGS = -c -Wall -Wextra -Werror

SRC = ft_display_file.c

OBJS = ft_display_file.o

HEADER = header.h

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC)
	gcc -o $(NAME) $(OBJS)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
