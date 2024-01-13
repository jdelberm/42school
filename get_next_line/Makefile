# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/28 20:40:29 by judelgad          #+#    #+#              #
#    Updated: 2024/01/13 22:34:45 by judelgad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler options
CFLAGS = -Wall -Wextra -Werror

# Files
SRC = get_next_line_utils.c get_next_line.c 
BSRC = get_next_line_utils_bonus.c get_next_line_bonus.c 

OBJECTS = $(SRC:.c=.o)
BOBJECTS = $(BSRC:.c=.o)

NAME = get_next_line.a

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

all: $(NAME)

bonus: $(BOBJECTS)
	ar rcs $(NAME) $(BOBJECTS)

clean:
	rm -rf $(OBJECTS)

fclean:
	rm -rf $(OBJECTS)
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re