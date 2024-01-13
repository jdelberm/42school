clear
make -C ../../get_next_line/ fclean all
cc -g -Wall -Wextra -Werror -o a.out main.c -D BUFFER_SIZE=10 ../../get_next_line/get_next_line.c ../../get_next_line/get_next_line_utils.c 
echo