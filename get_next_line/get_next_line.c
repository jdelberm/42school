/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:58:41 by judelgad          #+#    #+#             */
/*   Updated: 2024/01/10 06:11:04 by judelgad         ###   ########.fr       */
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
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*get_next_line(int fd)
{
	char		*line;
	static char	*head[256];
	int			rbytes;

	line = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	//rbytes is the total of read bytes
	rbytes = ft_read_text(fd, &head[fd]);
	if (rbytes != -1 && rbytes != 0)
		//check if /n pos is equal to rbytes.
		// if it doesn't there is a remainder
		ft_extract_line(&head[fd], &line, rbytes);
	else if (head[fd])
	{
		line = ft_strdup(head[fd]);
		free((head[fd]));
	}
	return (line);
}
