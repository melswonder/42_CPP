# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/12 11:41:29 by hirwatan          #+#    #+#              #
#    Updated: 2025/06/12 11:42:01 by hirwatan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Start_with_a_few_functions
CXX		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
OBJS	= $(SECS:.cpp=.o)
SRCS	= main.cpp\


all: $(NAME)

$(NAME): $(SRCS)
	 $(CXX) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re