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
	fd = open("multiple_line_no_nl.txt", O_RDWR);
	if (!fd)
		return (0);
	line = "";
	i = 1;
	while (line)
	{
		line = get_next_line(fd);
		if (line)
		{
			printf("line %i => \"%s\"\n", i++, line);
			free(line);
		}
	}
}