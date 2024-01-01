#include "../../get_next_line/get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(void)
{
	char *line;
	int fd;
	int found;
	int i;

	printf("BUFFER SIZE => %i\n", BUFFER_SIZE);
	fd = open("test_file.txt", O_RDONLY);
	if (!fd)
		return (0);
	found = 3;
	i = 0;
	while (found)
	{
		found--;
		line = get_next_line(fd);
		if (!*line)
			found = 0;
		else
			printf("line %i => %s\n", i++, line);
	}
}