/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:58:27 by judelgad          #+#    #+#             */
/*   Updated: 2024/01/01 09:39:31 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

size_t ft_strlen(char *str)
{
	size_t i;

	if(!str)
		return 0;
	i = 0;
	while (str[i])
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
size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len;

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

int ft_read_chunk(int fd, char **chunk)
{
	int res;

	res = 0;
	(*chunk) = malloc(BUFFER_SIZE);
	if (!chunk)
		return (0);
	res = read(fd, (*chunk), BUFFER_SIZE);
	if (res == -1 || res == 0)
	{
		free((*chunk));
		return (0);
	}
	else
		return (res);
}

int ft_extract_line(char *chunk, char **line)
{
	char *tmp;
	size_t i;
	int res;

	res = 0;
	if (line)
		tmp = (*line);
	(*line) = malloc(ft_strlen(tmp) + ft_strlen(chunk) + 1);
	if (!(*line))
		return (0);
	if (tmp)
		ft_strlcpy((*line), tmp, ft_strlen(tmp) + ft_strlen(chunk) + 1);
	ft_strlcpy(&(*line)[ft_strlen(tmp)], chunk, ft_strlen(chunk) + 1);
	i = 0;
	while ((*line)[i])
	{
		if ((*line)[i - 1] != '\n' && (*line)[i] == '\n')
			res = i + 1;
		i++;
	}
	return (res);
}
