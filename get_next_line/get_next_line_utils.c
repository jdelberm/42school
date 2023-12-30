/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:58:27 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/30 01:01:30 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

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

int	ft_read_char(int fd, char *c)
{
	char	*buffer;
	int		res;

	*c = 0;
	res = 0;
	buffer = malloc(1);
	if (!buffer)
		return (0);
	res = read(fd, buffer, 1);
	if (res == -1 || res == 0)
	{
		free(buffer);
		return (0);
	}
	else
		*c = *buffer;
	free(buffer);
	return (1);
}
