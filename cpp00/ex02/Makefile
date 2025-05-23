# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/23 14:34:44 by hirwatan          #+#    #+#              #
#    Updated: 2025/05/23 14:35:42 by hirwatan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Account
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS	= Contact.cpp\
          PhoneBook.cpp\
          main.cpp\


all: $(NAME)

$(NAME): $(SRCS)
	 $(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re