# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/29 17:02:00 by hirwatan          #+#    #+#              #
#    Updated: 2025/06/02 17:29:19 by hirwatan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Abstract_class
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
OBJS	= $(SECS:.cpp=.o)
SRCS	= main.cpp\
		  Animal.cpp\
		  Cat.cpp\
		  Dog.cpp\
		  WrongAnimal.cpp\
		  WrongCat.cpp\
		  Brain.cpp\


all: $(NAME)

$(NAME): $(SRCS)
	 $(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re