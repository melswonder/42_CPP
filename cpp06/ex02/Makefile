# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/10 19:58:15 by hirwatan          #+#    #+#              #
#    Updated: 2025/06/11 12:03:02 by hirwatan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Identify_real_type
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