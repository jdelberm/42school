/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:07:06 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/16 12:53:39 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * Counts the number of splitters in a string.
 *
 * @param s The string to count splitters in.
 * @param c The splitter character.
 * @return The number of splitters in the string.
 */
static size_t	ft_count_splitters(const char *s, char c)
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

static void	ft_free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

static size_t	ft_wordlen(const char **s, char c)
{
	size_t	word_len;

	while (**s == c && *s)
		(*s)++;
	word_len = 0;
	while (**s != c && **s)
	{
		word_len++;
		(*s)++;
	}
	return (word_len);
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

	lst = (char **)ft_calloc((ft_count_splitters(s, c) + 1), sizeof(char *));
	if (!s || !lst)
		return (0);
	i = 0;
	while (*s)
	{
		word_len = ft_wordlen(&s, c);
		if (word_len)
		{
			lst[i++] = ft_substr(s - word_len, 0, word_len);
			if (!lst[i - 1])
			{
				ft_free_split(lst);
				return (0);
			}
		}
	}
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