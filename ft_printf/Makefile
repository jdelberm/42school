# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/23 15:51:27 by judelgad          #+#    #+#              #
#    Updated: 2023/12/26 10:31:39 by judelgad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Dependencies
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

$(LIBFT):
	make -C $(LIBFT_PATH) all

# Set the compiler flags by implicit rules
CFLAGS = -Wall -Wextra -Werror

# Specify the programs to add to the library
CFILES = ft_exec_ftype.c ft_putnbr_base.c ft_putptr.c ft_printf.c \
ft_putchar.c ft_putstr.c

# Compile implicitly the .o files from the .c files
OFILES = $(CFILES:.c=.o)

# Library name
NAME = libftprintf.a

# Link the .o files with the library
$(NAME): $(LIBFT) $(OFILES)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OFILES)

# Launch the library creation
all: $(NAME)

# Removes the .o files
clean:
	make -C $(LIBFT_PATH) clean
	rm -f $(OFILES)

# Launchs clean command and removes the library
fclean: clean
	make -C $(LIBFT_PATH) fclean
	rm -f $(NAME)

# Recreates the library from zero
re: fclean all

# Unwanted targets/files, which are the created commands
.PHONY: all clean fclean re
