/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:07:06 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/07 11:07:01 by judelgad         ###   ########.fr       */
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

char	*ft_get_word(char *str, char delim, size_t start, size_t len)
{
	char	*substr;
	char	*trimmed;

	substr = ft_substr(str, start, len);
	if (!substr)
		return (0);
	trimmed = ft_strtrim(substr, &delim);
	free(substr);
	if (!trimmed)
		return (0);
	return (trimmed);
}

void	ft_free_splits(char **splits, size_t len)
{
	while (len-- > 0)
		free(splits[len]);
}

char	**ft_split(char const *s, char c)
{
	char	**splits;
	char	*str;
	char	*word;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	count;

	str = ft_strtrim(s, &c);
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
	splits = (char **)ft_calloc(count + 1, sizeof(char *));
	if (!splits)
	{
		free(str);
		return (0);
	}
	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			word = ft_get_word(str, c, j, i - j);
			if (!word)
			{
				free(str);
				ft_free_splits(splits, count + 1);
				free(splits);
				return (0);
			}
			splits[k++] = word;
			j = i;
			while (str[i] == c)
				i++;
		}
		i++;
		if (!str[i])
		{
			word = ft_get_word(str, c, j, i - j);
			if (!word)
			{
				free(str);
				ft_free_splits(splits, count + 1);
				free(splits);
				return (0);
			}
			splits[k] = word;
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