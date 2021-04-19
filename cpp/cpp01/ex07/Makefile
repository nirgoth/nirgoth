# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/10 14:22:17 by rbeach            #+#    #+#              #
#    Updated: 2021/02/16 18:10:33 by rbeach           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sedForMasters

CC = clang++

FLAGS = -Wall -Werror -Wextra

SRCS = main.cpp

OBJECTS = $(addprefix , $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) -o $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
