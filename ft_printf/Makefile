# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/23 15:51:27 by judelgad          #+#    #+#              #
#    Updated: 2023/12/23 18:30:56 by judelgad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Set the compiler flags by implicit rules
CFLAGS = -Wall -Wextra -Werror

# Specify the programs to add to the library
CFILES = ft_exec_ftype.c ft_itoa.c ft_itohex.c ft_print_pointer.c \
ft_print_unsigned.c ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c

# Compile implicitly the .o files from the .c files
OFILES = $(CFILES:.c=.o)

# Library name
NAME = libftprintf.a

# Link the .o files with the library
$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

# Launch the library creation
all: $(NAME)

# Removes the .o files
clean:
	rm -f $(OFILES)

# Launchs clean command and removes the library
fclean: clean
	rm -f $(NAME)

# Recreates the library from zero
re: fclean all

# Unwanted targets/files, which are the created commands
.PHONY: all clean fclean re
