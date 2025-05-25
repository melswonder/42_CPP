# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/21 18:45:33 by hirwatan          #+#    #+#              #
#    Updated: 2025/05/25 13:50:11 by hirwatan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= PhoneBook
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
OBJS	= $(SECS:.cpp=.o)
SRCS	= Contact.cpp\
          PhoneBook.cpp\
          main.cpp\


all: $(NAME)

$(NAME): $(SRCS)
	 $(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re