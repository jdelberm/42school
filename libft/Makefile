#Compiler and flags
CFLAGS = -Wall -Wextra -Werror

#FT functions to include in the makefile
CFILES = $(wildcard ft*.c)

#All the object files prior to the linking
OFILES = $(CFILES:%.c=%.o)

#Library name
LNAME = libft.a

$(LNAME): $(OFILES)
	ar rcs $(LNAME) $(OFILES)
	make clean

#This structure avoids relinking
#ft_strlen: ft_strlen.c
#	cc ft_strlen.c -o ft_strlen

#Check if the library is already created and stops if so
all: $(LNAME) clean

#Performs the linking and stores the result in the library name

#Removes the .o files
clean:
	rm -f $(OFILES)

#Launchs clean command and removes the library
fclean: clean
	rm -f $(LNAME)

#Rebuild action
re: fclean $(LNAME)

.PHONY: all clean fclean re