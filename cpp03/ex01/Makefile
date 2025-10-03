# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/26 17:11:23 by gmechaly          #+#    #+#              #
#    Updated: 2025/10/03 19:56:41 by gmechaly         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ScavTrap

CC			= c++

CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS		= main.cpp ClapTrap.cpp ScavTrap.cpp

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