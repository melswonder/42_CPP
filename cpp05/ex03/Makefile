# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/29 17:02:00 by hirwatan          #+#    #+#              #
#    Updated: 2025/06/09 16:11:28 by hirwatan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= At_least_this_beats_coffee-making
CXX		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
OBJS	= $(SECS:.cpp=.o)
SRCS	= main.cpp\
		  Bureaucrat.cpp\
		  AForm.cpp\
		  PresidentialPardonForm.cpp\
		  RobotomyRequestForm.cpp\
		  ShrubberyCreationForm.cpp\
		  Intern.cpp


all: $(NAME)

$(NAME): $(SRCS)
	 $(CXX) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re