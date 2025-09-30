# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/24 20:38:30 by gmechaly          #+#    #+#              #
#    Updated: 2025/09/25 18:07:13 by gmechaly         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= usefulFixed

CC			= c++

CPPFLAGS	= -Wextra -Wall -Werror -std=c++98

SRCS		= main.cpp Fixed.cpp

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