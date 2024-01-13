/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:58:41 by judelgad          #+#    #+#             */
/*   Updated: 2024/01/13 22:11:30 by judelgad         ###   ########.fr       */
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
#include <time.h>
#include <unistd.h>

void	ft_headtoline(char **head, char **line, int i, int j)
{
	char	*aux;

	if (i - 1 < 0)
	{
		(*line) = malloc(2);
		(*line)[0] = (*head)[0];
		(*line)[1] = 0;
		aux = (*head);
		(*head) = ft_strdup(&(*head)[i + 1]);
		free(aux);
	}
	else
	{
		(*line) = malloc(i + 2);
		j = i + 1;
		while (j--)
			(*line)[j] = (*head)[j];
		(*line)[i + 1] = 0;
		aux = (*head);
		(*head) = ft_strdup(&(*head)[i + 1]);
		free(aux);
	}
}

int	ft_contains_nl(char **head, char **line)
{
	int	i;
	int	j;

	if ((*head))
	{
		if (!*(*head))
		{
			free((*head));
			(*head) = 0;
			(*line) = 0;
			return (1);
		}
		i = 0;
		j = 0;
		while ((*head)[i])
		{
			if ((*head)[i] == '\n')
			{
				ft_headtoline(head, line, i, j);
				return (1);
			}
			i++;
		}
	}
	return (0);
}

void	ft_add_head(char **line, char **head)
{
	char	*aux;

	if ((*head))
	{
		aux = (*line);
		(*line) = ft_strjoin((*head), (*line));
		free((*head));
		(*head) = 0;
		if (aux)
			free(aux);
	}
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*head[FD_OPEN_MAX];
	char		*remainder;
	char		*text;
	int			rbytes;

	line = 0;
	remainder = 0;
	rbytes = 0;
	text = 0;
	if (!(fd < 0 || BUFFER_SIZE <= 0) && !ft_contains_nl(&head[fd], &line))
	{
		if (ft_read_text(fd, &rbytes, &text) == -1)
		{
			if (head[fd])
			{
				free(head[fd]);
				head[fd] = 0;
			}
			return (0);
		}
		if (rbytes != -1 && rbytes != 0 && text)
			line = ft_extract_line(&remainder, text, rbytes);
		else if ((rbytes == -1 || rbytes == 0) && head[fd])
			line = ft_strdup("");
		ft_add_head(&line, &head[fd]);
		head[fd] = remainder;
		if (text)
			free(text);
	}
	return (line);
}
