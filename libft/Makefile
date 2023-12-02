#Compiler and flags
CFLAGS = -Wall -Wextra -Werror

#FT functions to include in the makefile
CFILES = $(wildcard ft*.c)

#All the object files prior to the linking
OFILES = $(CFILES:%.c=%.o)

#Library name
NAME = libft.a

#Performs the linking and stores the result in the library name
$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)
	make clean

#Check if the library is already created and stops if so
all: $(NAME)

#Removes the .o files
clean:
	rm -f $(OFILES)

#Launchs clean command and removes the library
fclean: clean
	rm -f $(NAME)

#Rebuild action
re: fclean $(NAME)

.PHONY: all clean fclean re