#Compiler and flags
CFLAGS = -Wall -Wextra -Werror

#FT functions to include in the makefile
CFILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c \
ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BCFILES = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c \
ft_lstnew_bonus.c ft_lstsize_bonus.c

#All the object files prior to the linking
OFILES = $(CFILES:%.c=%.o)

#All the bonus object files prior to the linking
BOFILES = $(BCFILES:%.c=%.o)

#Library name
NAME = libft.a

#Performs the linking and stores the result in the library name
$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

#Check if the library is already created and stops if so
all: $(NAME)

bonus: $(BOFILES)
	ar rcs $(NAME) $(BOFILES)

#Removes the .o files
clean:
	rm -f $(OFILES)
	rm -f $(BOFILES)

#Launchs clean command and removes the library
fclean: clean
	rm -f $(NAME)

#Rebuild action
re: fclean $(NAME)

.PHONY: all clean fclean re