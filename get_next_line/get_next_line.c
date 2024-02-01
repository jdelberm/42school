/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:58:41 by judelgad          #+#    #+#             */
/*   Updated: 2024/02/01 01:35:46 by judelgad         ###   ########.fr       */
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
	if (str)
	{
		while (*str && !found)
		{
			if (*str == '\n')
				found = 1;
			str++;
		}
	}
	return (found);
}

char	*ft_get_line(char *str)
{
	char	*line;
	int		i;
	int		nfound;

	i = 0;
	while (str[i])
	{
		if (str[i++] == '\n')
			break ;
	}
	line = malloc(i + 1);
	if (!line)
		return (0);
	i = 0;
	nfound = 0;
	while (!nfound && str[i])
	{
		line[i] = str[i];
		if (str[i] == '\n')
			nfound = 1;
		i++;
	}
	line[i] = 0;
	return (line);
}

char	*ft_get_remainder(char *str, char *line)
{
	char	*remainder;
	int		line_size;

	remainder = 0;
	if (line)
	{
		line_size = ft_strlen(line);
		if (str[line_size])
			remainder = ft_strdup(&str[line_size]);
	}
	if (str)
	{
		free(str);
		str = 0;
	}
	return (remainder);
}

int	ft_read_text(int fd, int *res, char **text)
{
	char	*buffer;

	*res = 1;
	*text = 0;
	while (*res != -1 && *res != 0)
	{
		buffer = malloc(BUFFER_SIZE + 1);
		if (!buffer)
		{
			free(*text);
			text = 0;
			return (0);
		}
		*res = read(fd, buffer, BUFFER_SIZE);
		if (*res != -1 && *res != 0)
		{
			buffer[*res] = 0;
			*text = ft_strjoin_and_free(*text, buffer);
			if (*text && ft_strchr(*text, '\n'))
				break ;
		}
		else
			free(buffer);
	}
	return (1);
}

char	*get_next_line(int fd)
{
	static char *str[FD_OPEN_MAX];
	char *text;
	int res;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	if (!ft_contains_nl(str[fd]))
	{
		if (!ft_read_text(fd, &res, &text))
		{
			free(str[fd]);
			str[fd] = 0;
			return (0);
		}
		if ((!text && !str[fd]) || res == -1)
		{
			free(str[fd]);
			str[fd] = 0;
		}
		str[fd] = ft_strjoin_and_free(str[fd], text);
		if (!str[fd])
			return (0);
	}
	text = ft_get_line(str[fd]);
	str[fd] = ft_get_remainder(str[fd], text);
	return (text);
}