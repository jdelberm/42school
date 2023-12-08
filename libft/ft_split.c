/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:07:06 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/08 11:44:16 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

// loop the string while not null
//	if a splitter is found
//		if it's the first one
//			make substring from i=0
//		if it isn't the first
//			make substring from last splitter
//		check if there are more splitters next to it
//			sum the index

// TODO: revisar las llamadas a free donde no se permita la función

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

size_t	ft_count_splitters(char *str, char c)
{
	size_t	count;
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	if (!*str)
		count = 0;
	else
	{
		count = 1;
		while (str[i])
		{
			if (str[i] == c)
				count++;
			while (str[i] == c)
				i++;
			i++;
		}
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
	char	**splits;
	char	*str;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	count;

	str = ft_trim_char(s, c);
	if (!str)
		return (0);
	count = ft_count_splitters(str, c);
	splits = (char **)ft_calloc(count + 1, sizeof(char *));
	if (!splits)
		return (ft_free(str, 0, 0));
	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
		{
			splits[k++] = ft_get_word(str, c, j, i - j);
			if (!splits[k-1])
				return (ft_free(str, splits, count + 1));
			j = i;
		}
		i++;
		if (!str[i])
		{
			splits[k] = ft_get_word(str, c, j, i - j);
			if (!splits[k])
				return (ft_free(str, splits, count + 1));
		}
	}
	free(str);
	return (splits);
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