# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/21 16:37:52 by whortenc          #+#    #+#              #
#    Updated: 2021/04/21 16:37:53 by whortenc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

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
