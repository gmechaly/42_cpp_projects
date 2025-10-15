# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 15:14:04 by gmechaly          #+#    #+#              #
#    Updated: 2025/10/15 15:24:36 by gmechaly         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Animals

CC			= c++

CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS		= main.cpp Animal.cpp Cat.cpp Dog.cpp

OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%o : %.cpp
			$(CC) $(CPPFLAGS) -c $< -o $@

clean:	root-clean

root-clean:
			@rm -f $(OBJS)

fclean:	root-fclean

root-fclean: root-clean
			@rm -f $(NAME)

re: fclean all