# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cedmulle <cedmulle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/22 14:49:10 by cedmulle          #+#    #+#              #
#    Updated: 2024/02/22 14:54:30 by cedmulle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= clap
SRC_DIR	= src/
INC_DIR	= inc/
SRC 	= $(SRC_DIR)ClapTrap.cpp \
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
