/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:07:06 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/14 07:42:33 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

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