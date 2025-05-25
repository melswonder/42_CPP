# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/21 18:45:33 by hirwatan          #+#    #+#              #
#    Updated: 2025/05/25 13:52:18 by hirwatan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= megaphone
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
OBJS	= $(SECS:.cpp=.o)
SRCS	= megaphone.cpp


all: $(NAME)

$(NAME): $(SRCS)
	 $(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re