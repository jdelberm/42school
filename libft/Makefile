# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/14 07:52:13 by judelgad          #+#    #+#              #
#    Updated: 2023/12/14 10:23:25 by judelgad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Customization
C_GREEN = \033[0;32m
C_GREEN_B = \033[1;32m
C_DEL = \033[0;31m
C_WARN = \033[0;33m
C_DEF = \033[0m

H_LBLUE = \033[1;34m
H_LGREEN = \033[1;32m

CNT = 0

comp_done = "${C_GREEN_B}'$(NAME)' ready to go$(C_DEFAULT)\n"

libft_header:
	@printf "\n${H_LBLUE}"
	@printf "\n     _                 ${H_LGREEN}POOL: OCT/2023${H_LBLUE}"
	@printf "\n ___/__) ,  /)  /)     ${H_LGREEN}LOCATION: 42 MALAGA${H_LBLUE}"
	@printf "\n(, /       (/_ // _/_ "
	@printf "\n  /    _(_/_) /(_ (__  ${H_LGREEN}BH ABSORTION: 12/02/2023${H_LBLUE}"
	@printf "\n (_____      /)       "
	@printf "\n        )   (/        "
	@printf "\n\n${C_DEF}"

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
	@printf "\n${C_GREEN}Linking object code to the library$(C_DEFAULT)\n"
	@ar rcs $(NAME) $(OFILES)

%.o: %.c
	@printf "${C_GREEN}."
	@cc -c $< -o $@

#Check if the library is already created and stops if so
all: libft_header $(NAME)
	@echo $(comp_done)

bonus: $(BOFILES)
	@printf "\n${C_GREEN}Linking bonus object code to the library$(C_DEFAULT)\n"
	@ar rcs $(NAME) $(BOFILES)

#Removes the .o files
clean:
	@printf "${C_DEL}Removing object code (base)$(C_DEFAULT)\n"
	@rm -f $(OFILES)
	@printf "${C_DEL}Removing object code (bonus)$(C_DEFAULT)\n"
	@rm -f $(BOFILES)

#Launchs clean command and removes the library
fclean: clean
	@printf "${C_WARN}Forcing cleaning of library\n$(C_DEFAULT)"
	@rm -f $(NAME)

#Rebuild action
re: fclean $(NAME)
	@echo $(comp_done)

.PHONY: all clean fclean re