# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/20 14:59:33 by cedmulle          #+#    #+#              #
#    Updated: 2024/02/20 15:01:24 by cedmulle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= trap
SRC_DIR	= src/
INC_DIR	= inc/
SRC		= $(SRC_DIR)ClapTrap.cpp \
			$(SRC_DIR)main.cpp
OBJ		= $(SRC:.cpp=.o)
CC		= c++
CFL		= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFL) -I $(INC_DIR) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFL) -I $(INC_DIR) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

