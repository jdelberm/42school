#include "../../get_next_line/get_next_line.h"

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int	main(void)
{
	char *line;
	int fd;
	int i;

	fd = open("test_file.txt", O_RDONLY);
	line = get_next_line(fd);
	if (!line)
		return (0);
	i = 0;
	while (line[i])
	{
		write(1, &line[i], 1);
		i++;
	}
	// free(line);
}