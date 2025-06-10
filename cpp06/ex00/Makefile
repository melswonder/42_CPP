# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/10 11:38:47 by hirwatan          #+#    #+#              #
#    Updated: 2025/06/10 18:44:39 by hirwatan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= convert
CXX		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
OBJS	= $(SECS:.cpp=.o)
SRCS	= main.cpp\
		  ScalarConverter.cpp


all: $(NAME)

$(NAME): $(SRCS)
	 $(CXX) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re