# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/29 17:02:00 by hirwatan          #+#    #+#              #
#    Updated: 2025/06/09 16:11:14 by hirwatan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Form_up,_maggots!
CXX		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
OBJS	= $(SECS:.cpp=.o)
SRCS	= main.cpp\
		  Bureaucrat.cpp\
		  Form.cpp\


all: $(NAME)

$(NAME): $(SRCS)
	 $(CXX) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re