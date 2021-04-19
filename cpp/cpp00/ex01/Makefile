# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/10 14:22:17 by rbeach            #+#    #+#              #
#    Updated: 2021/02/07 13:51:31 by rbeach           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = clang++

FLAGS = -Wall -Werror -Wextra

SRCS = MyAwesomePhoneBook.cpp Contact.cpp

HEADERS = Contact.hpp

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
