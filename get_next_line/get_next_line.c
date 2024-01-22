/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:58:41 by judelgad          #+#    #+#             */
/*   Updated: 2024/01/22 23:59:50 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int	ft_contains_nl(const char *str)
{
	int	found;

	found = 0;
	while (*str && !found)
	{
		if (*str == '\n')
			found = 1;
		str++;
	}
	return (found);
}

char	*ft_get_line(char *str)
{
	char	*line;
	int		i;

	line = malloc(ft_strlen(str) + 1);
	if (!line)
		return (0);
	i = 0;
	while (str[i])
	{
		line[i] = str[i];
		if (str[i] == '\n')
			break ;
		i++;
	}
	if (!str[i])
		line[i] = 0;
	else
		line[i + 1] = 0;
	return (line);
}

char	*ft_get_remainder(char *str, char *line)
{
	char	*remainder;
	int		len_size;

	remainder = 0;
	if (line)
	{
		len_size = ft_strlen(line);
		remainder = ft_strdup(&str[len_size]);
	}
	free(str);
	return (remainder);
}

int	ft_read_text(int fd, char **text)
{
	int		res;
	char	*buffer;

	res = 1;
	*text = 0;
	while (res != -1 && res != 0)
	{
		buffer = malloc(BUFFER_SIZE + 1);
		if (!buffer)
			return (0);
		res = read(fd, buffer, BUFFER_SIZE);
		if (res != -1 && res != 0)
		{
			buffer[res] = 0;
			(*text) = ft_strjoin_and_free(*text, buffer);
			if (*text && ft_strchr(*text, '\n'))
				break ;
		}
		else
			free(buffer);
	}
	return (res);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*text;
	static char	*str[FD_OPEN_MAX];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	line = 0;
	if (str[fd] && ft_contains_nl(str[fd]))
		line = ft_get_line(str[fd]);
	else
	{
		if (ft_read_text(fd, &text) == -1)
		{
			free(str[fd]);
			str[fd] = 0;
			return (0);
		}
		str[fd] = ft_strjoin_and_free(str[fd], text);
		if (*str[fd])
			line = ft_get_line(str[fd]);
	}
	str[fd] = ft_get_remainder(str[fd], line);
	return (line);
}
