/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:58:41 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/30 01:04:49 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TODO: Analyze where static variables could be useful
// TODO: Program must be compiled with flag -D BUFFER_SIZE=xx
// TODO: Make read buffer be determined by BUFFER_SIZE value
// TODO: Read line
// TODO: Return NULL if read fails
// TODO: Return NULL if EOF is reached
// TODO: Read from file
// TODO: Read from stdin
// TODO: Ensure line ending with \n
// TODO: Avoid \n ending if EOF doesn't
// TODO: Declare util functions in GET_NEXT_LINE_UTILS
// TODO: Ensure lseek and global variables aren't being used

#include "get_next_line.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

char	*get_next_line(int fd)
{
	char	*c;

	c = malloc(1);
	while (ft_read_char(fd, c))
	{
		write(1, c, 1);
	}
	return ("");
}

int	main(void)
{
	char	*line;
	int		fd;
	int		i;

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
