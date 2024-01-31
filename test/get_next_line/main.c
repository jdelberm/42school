#include "../../get_next_line/get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(void)
{
	char *line;
	int fd;
	int i;

	printf("BUFFER SIZE => %i\n", BUFFER_SIZE);
	fd = open("1char.txt", O_RDONLY);
	if (!fd)
		return (0);
	i = 1;
	while((line = get_next_line(fd))){
		printf("line %i => \"%s\"\n", i++, line);
		free(line);
	}
}