/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:07:06 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/14 07:50:02 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/**
 * @brief Trims a character from the beginning and end of a string.
 *
 * This function takes a string and a delimiter character as input and removes
 * all occurrences of the delimiter character from the beginning and end of the
 * string.
 *
 * @param str The string to be trimmed.
 * @param delim The delimiter character to be removed.
 * @return A pointer to the trimmed string.
 */
char	*ft_trim_char(const char *str, char delim)
{
	char	*str_delim;
	char	*trimmed;

	str_delim = ft_calloc(2, sizeof(char));
	if (!str_delim)
		return (0);
	str_delim[0] = delim;
	trimmed = ft_strtrim(str, str_delim);
	free(str_delim);
	return (trimmed);
}

/**
 * @brief Retrieves a word from a string based on the given delimiter, start
 * index, and length.
 *
 * This function takes a string, a delimiter character, a start index, and a
 * length as input.
 * It retrieves a word from the string starting at the specified index and with
 * the specified length.
 * The word is separated by the given delimiter character.
 *
 * @param s The string from which to retrieve the word.
 * @param delim The delimiter character used to separate words.
 * @param start The starting index of the word in the string.
 * @param len The length of the word to retrieve.
 * @return A pointer to the retrieved word, or NULL if an error occurred.
 */
char	*ft_get_word(char const *s, char delim, size_t start, size_t len)
{
	char	*substr;
	char	*trimmed;

	substr = ft_substr(s, start, len);
	if (!substr)
		return (0);
	trimmed = ft_trim_char(substr, delim);
	free(substr);
	if (!trimmed)
		return (0);
	return (trimmed);
}

/**
 * Counts the number of splitters in a string.
 *
 * @param s The string to count splitters in.
 * @param c The splitter character.
 * @return The number of splitters in the string.
 */
size_t	ft_count_splitters(const char *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

/**
 * @brief Frees the memory allocated for a string and an array of strings.
 * 
 * This function takes a string, an array of strings, and the number of
 * elements in the array.
 * It frees the memory allocated for the string and each element in the array.
 * 
 * @param str The string to be freed.
 * @param splits The array of strings to be freed.
 * @param len The number of elements in the array.
 */
char	**ft_free(char *str, char **splits, size_t len)
{
	if (str)
		free(str);
	while (len-- > 0)
		if (splits[len])
			free(splits[len]);
	if (splits)
		free(splits);
	return (0);
}

/**
 * Splits a string into an array of substrings based on a delimiter character.
 *
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return An array of strings representing the substrings.
 */
char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	int		i;

	lst = (char **)malloc((ft_count_splitters(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}
/*
int	main(void)
{
	char *s = "      split       this for   me  !       ";

	char **result = ft_split(s, ' ');
	if (!result)
		printf("TEST_SUCCESS");
	else
		printf("TEST_FAILED");
	printf("\n");
}*/