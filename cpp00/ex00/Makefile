# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/04 18:52:15 by gmechaly          #+#    #+#              #
#    Updated: 2025/09/04 18:52:49 by gmechaly         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone

CC			= c++

CPPFLAGS	= -Wextra -Wall -Werror -std=c++98

SRCS		= megaphone.cpp

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

.PHONY: all clean fclean re root-clean root-fclean