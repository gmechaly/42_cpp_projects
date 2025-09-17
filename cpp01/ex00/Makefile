# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/17 20:04:40 by gmechaly          #+#    #+#              #
#    Updated: 2025/09/17 21:48:09 by gmechaly         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= BraiiiiiiinnnzzzZ

CC			= c++

CPPFLAGS	= -Wextra -Wall -Werror -std=c++98

SRCS		= newZombie.cpp randomChump.cpp Zombie.cpp main.cpp

OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
			$(CC) $(CPPFLAGS) -c $< -o $@

clean:	root-clean
	
root-clean:
			@rm -f $(OBJS)

fclean: root-fclean

root-fclean: root-clean
			@rm -f $(NAME)
			
re: fclean all
