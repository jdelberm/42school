/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:58:27 by judelgad          #+#    #+#             */
/*   Updated: 2024/01/01 08:59:15 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>

size_t	ft_alloc_len(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

/**
 * Copies a string from source to destination with a specified size limit.
 *
 * @param dst The destination string.
 * @param src The source string.
 * @param size The size limit of the destination string.
 * @return The total length of the source string.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	len = 0;
	while (src[len])
		len++;
	return (len);
}

char	*ft_read_chunk(int fd)
{
	char	*buffer;
	int		res;

	res = 0;
	buffer = malloc(BUFFER_SIZE);
	if (!buffer)
		return (0);
	res = read(fd, buffer, BUFFER_SIZE);
	if (res == -1 || res == 0)
	{
		free(buffer);
		return (0);
	}
	else
		return (buffer);
}

char	*ft_extract_line(char *chunk)
{
	static char	*line;
	char		*tmp;
	size_t		i;
	size_t		j;

	if (line)
		tmp = line;
	line = malloc(ft_alloc_len(chunk) + ft_alloc_len(tmp) + 1);
	if (!line)
		return (0);
	i = ft_alloc_len(tmp);
	j = 0;
	if (tmp)
		ft_strlcpy(line, tmp, i + ft_alloc_len(chunk) + 1);
	while (chunk[j] && chunk[j] != '\n')
	{
		line[i + j] = chunk[j];
		j++;
	}
	line[i + j] = '\0';
	return (line);
}
