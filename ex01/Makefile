# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/01 13:39:17 by tmalkawi          #+#    #+#              #
#    Updated: 2025/06/01 13:39:17 by tmalkawi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=bin/zombiehorde
SRC=main.cpp \
	zombieHorde.cpp \
	Zombie.cpp \
COMPILER=c++
COMPILER_ARGS=-Wall -Wextra -Werror -std=c++98
OBJECTS=$(addprefix obj/, $(patsubst %.cpp, %.o, $(SRC)))

all: $(NAME)

$(NAME): $(OBJECTS)
	$(COMPILER) $(COMPILER_ARGS) $(MAIN) $(OBJECTS) -o $@

obj/%.o: %.cpp
	@mkdir -p $(dir $(NAME))
	@mkdir -p $(dir $(OBJECTS))
	$(COMPILER) $(COMPILER_ARGS) -c $< -o $@

clean:
	rm -rf $(dir $(MAIN_OBJECT))

fclean: clean
	rm -rf $(NAME)

re: fclean all
