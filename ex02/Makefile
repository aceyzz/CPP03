# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cedmulle <cedmulle@student.42lausanne.ch>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/22 14:49:10 by cedmulle          #+#    #+#              #
#    Updated: 2024/02/22 17:58:37 by cedmulle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= frag
SRC_DIR	= src/
INC_DIR	= inc/
SRC 	= $(SRC_DIR)ClapTrap.cpp \
			$(SRC_DIR)ScavTrap.cpp \
			$(SRC_DIR)FragTrap.cpp \
			$(SRC_DIR)main.cpp
OBJ		= $(SRC:.cpp=.o)
CXX		= c++
CFL		= -Wall -Werror -Wextra -std=c++98
RM		= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFL) -I $(INC_DIR) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFL) -I $(INC_DIR) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
