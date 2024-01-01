make -C ../../get_next_line/ fclean all
cc -Wall -Wextra -Werror -o a.out main.c -D BUFFER_SIZE=12 ../../get_next_line/get_next_line.c ../../get_next_line/get_next_line.a
echo