/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:58:27 by judelgad          #+#    #+#             */
/*   Updated: 2024/01/31 21:50:08 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * Searches for the last occurrence of a character in a string.
 *
 * @param s The string to search in.
 * @param c The character to search for.
 * @return A pointer to the last occurrence of the character in the string,
 *         or NULL if the character is not found.
 */
char	*ft_strchr(const char *s, int c)
{
	char			*found;
	unsigned char	uc;

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
char	*ft_strdup(const char *s)
{
	char	*dst;
	int		i;

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
	dst[i] = 0;
	return (dst);
}

/**
 * Concatenates two strings and returns the result.
 *
 * @param s1 The first string to be concatenated.
 * @param s2 The second string to be concatenated.
 * @return The concatenated string, or NULL if memory allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	s1_size;
	size_t	s2_size;
	size_t	i;

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
	res[s1_size + s2_size] = 0;
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

char	*ft_strjoin_and_free(char *str_a, char *str_b)
{
	char	*res;

	if (!str_a)
		return (str_b);
	if (!str_b)
		return (str_a);
	res = ft_strjoin(str_a, str_b);
	free(str_a);
	free(str_b);
	if (!res)
		return (0);
	return (res);
}
