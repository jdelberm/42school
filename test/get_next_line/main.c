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
	fd = open("read_error.txt", O_RDONLY);
	if (!fd)
		return (0);
	line = "";
	i = 1;
	line = get_next_line(fd);
	if (line)
	{
		printf("line %i => \"%s\"\n", i++, line);
		free(line);
	}

	line = get_next_line(fd);
	if (line)
	{
		printf("line %i => \"%s\"\n", i++, line);
		free(line);
	}
	close(fd);
	line = get_next_line(fd);
	if (line)
	{
		printf("line %i => \"%s\"\n", i++, line);
		free(line);
	}

	fd = open("read_error.txt", O_RDONLY);
	line = get_next_line(fd);
	if (line)
	{
		printf("line %i => \"%s\"\n", i++, line);
		free(line);
	}
}