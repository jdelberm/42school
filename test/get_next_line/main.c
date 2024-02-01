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
	// variable_nls.txt => buffer 10 linea 2 da un leak
	// 4to malloc => impresión de primera línea y primter malloc de segunda 
	// ejecución
	fd = open("variable_nls.txt", O_RDONLY);
	if (!fd)
		return (0);
	i = 1;
	while((line = get_next_line(fd))){
		printf("line %i => \"%s\"\n", i++, line);
		fd = 352;
		free(line);
	}
}