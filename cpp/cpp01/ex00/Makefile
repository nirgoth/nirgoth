# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/19 16:39:18 by whortenc          #+#    #+#              #
#    Updated: 2021/04/19 16:39:21 by whortenc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pony

CC = clang++

FLAGS = -Wall -Werror -Wextra

SRCS = main.cpp Pony.cpp

HEADERS = Pony.hpp

HEADER_DIR = .

OBJECTS = $(addprefix , $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJECTS) $(HEADER_DIR)/$(HEADERS)
	$(CC) -o $(NAME) $(OBJECTS) -I$(HEADER_DIR)

%.o: %.c
	$(CC) $(FLAGS) -I$(HEADER_DIR) -o $@ -c $<

clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
