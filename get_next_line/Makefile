# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/28 20:40:29 by judelgad          #+#    #+#              #
#    Updated: 2023/12/28 20:59:29 by judelgad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler options
CFLAGS = -Wall -Wextra -Werror

# Files
SRC = get_next_line_utils.c get_next_line.c 

OBJECTS = $(SRC:.c=.o)

NAME = get_next_line.a

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

all: $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean:
	rm -rf $(OBJECTS)
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re