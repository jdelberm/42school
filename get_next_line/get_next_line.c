/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:58:41 by judelgad          #+#    #+#             */
/*   Updated: 2024/01/01 08:54:28 by judelgad         ###   ########.fr       */
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

char *get_next_line(int fd)
{
	char *chunk;
	static char *line;
	char *tmp;
	int found;
	int res;

	found = 1;
	while (found)
	{
		chunk = ft_read_chunk(fd);
		if (!chunk)
		{
			found = 0;
		}
		else
		{
			res = ft_extract_line(chunk, &line);
			if (res)
			{
				tmp = malloc(res);
				ft_strlcpy(tmp, line, res);
				tmp[res - 1] = 'n';
				line = &line[res];
				return (tmp);
			}
		}
	}
	return (0);
}