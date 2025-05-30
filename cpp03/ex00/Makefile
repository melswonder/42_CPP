# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/29 17:02:00 by hirwatan          #+#    #+#              #
#    Updated: 2025/05/30 12:06:35 by hirwatan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Aaaaand..._OPEN!
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
OBJS	= $(SECS:.cpp=.o)
SRCS	= main.cpp\
		  ClapTrap.cpp\


all: $(NAME)

$(NAME): $(SRCS)
	 $(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re