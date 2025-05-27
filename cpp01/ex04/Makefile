# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/26 14:47:22 by hirwatan          #+#    #+#              #
#    Updated: 2025/05/27 19:34:20 by hirwatan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= Sed_is_for_losers
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
OBJS	= $(SECS:.cpp=.o)
SRCS	= main.cpp\
		  Sed.cpp\


all: $(NAME)

$(NAME): $(SRCS)
	 $(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re