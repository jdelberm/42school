/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:58:27 by judelgad          #+#    #+#             */
/*   Updated: 2024/01/10 06:31:02 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * Searches for the last occurrence of a character in a string.
 *
 * @param s The string to search in.
 * @param c The character to search for.
 * @return A pointer to the last occurrence of the character in the string,
 *         or NULL if the character is not found.
 */
char *ft_strrchr(const char *s, int c)
{
	char *found;
	unsigned char uc;

	uc = c;
	found = 0;
	while (*s)
	{
		if (*s == uc)
			found = (char *)s;
		s++;
	}
	if (*s == uc)
		return ((char *)s);
	return (found);
}

/**
 * @brief   Duplicates a string.
 *
 * This function allocates memory for a new string and copies the contents of
 * the input string into it. The new string is terminated with a null character.
 *
 * @param   s   The string to be duplicated.
 * @return  A pointer to the newly allocated string, or NULL if the allocation
 *  fails.
 */
char *ft_strdup(const char *s)
{
	char *dst;
	int i;

	i = 0;
	while (s[i])
		i++;
	dst = malloc(i + 1);
	if (!dst)
		return (0);
	i = 0;
	while (s[i])
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = s[i];
	return (dst);
}

/**
 * Concatenates two strings and returns the result.
 *
 * @param s1 The first string to be concatenated.
 * @param s2 The second string to be concatenated.
 * @return The concatenated string, or NULL if memory allocation fails.
 */
char *ft_strjoin(char const *s1, char const *s2)
{
	char *res;
	size_t s1_size;
	size_t s2_size;
	size_t i;

	s1_size = 0;
	while (s1[s1_size])
		s1_size++;
	s2_size = 0;
	while (s2[s2_size])
		s2_size++;
	res = malloc(s1_size + s2_size + 1);
	if (!res)
		return (0);
	i = 0;
	while (i < s1_size + s2_size)
	{
		if (i < s1_size)
			((char *)res)[i] = ((char *)s1)[i];
		else if (i - s1_size < s2_size)
			((char *)res)[i] = ((char *)s2)[i - s1_size];
		i++;
	}
	return (res);
}

int ft_read_text(int fd, char **head)
{
	int res;
	char *buffer;

	if (!(*head))
		(*head) = ft_strdup("");
	if (!(*head))
		return (0);
	res = 0;
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (0);
	res = read(fd, buffer, BUFFER_SIZE);
	while (res != -1 && res != 0)
	{
		buffer[res] = 0;
		(*head) = ft_strjoin(*head, buffer);
		if (ft_strrchr((*head), '\n') || res == 0 || res == -1)
			break ;
		res += read(fd, buffer, BUFFER_SIZE);
	}
	free(buffer);
	return (res);
}

int ft_extract_line(char **head, char **line, int len)
{
	char	*tmp;
	int	i;

	(*line) = malloc(len);
	if (!(*line))
		return (0);
	i = 0;
	while ((*head)[i] && (*head)[i] != '\n')
	{
		(*line)[i] = (*head)[i];
		i++;
	}
	if ((*head)[i] == '\n')
	{
		(*line)[i] = 0;
		if (i < len - 1)
			tmp = ft_strdup(&(*head)[i + 1]);
		else
			tmp = 0;
		free((*head));
		(*head) = tmp;
		return (i + 1);
	}
	return (0);
}
