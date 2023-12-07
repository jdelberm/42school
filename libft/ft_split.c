/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:07:06 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/07 10:29:13 by judelgad         ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	char	**splits;
	char	*str;
	char	*substr;
	char	*trimmed;
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
		return (0);
	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			substr = ft_substr(str, j, i - j);
			if (!substr)
				return (0);
			trimmed = ft_strtrim(substr, &c);
			free(substr);
			if (!trimmed)
				return (0);
			splits[k] = ft_strdup(trimmed);
			free(trimmed);
			k++;
			j = i;
			while (str[i] == c)
				i++;
		}
		i++;
		if (!str[i])
		{
			substr = ft_substr(str, j, i - j);
			if (!substr)
				return (0);
			trimmed = ft_strtrim(substr, &c);
			free(substr);
			if (!trimmed)
				return (0);
			splits[k] = ft_strdup(trimmed);
			free(trimmed);
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