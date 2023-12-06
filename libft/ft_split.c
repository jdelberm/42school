/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:07:06 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/06 20:11:39 by judelgad         ###   ########.fr       */
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
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	count;

	str = ft_strtrim(s, &c);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c || i == ft_strlen(str) - 1)
			count++;
		while (str[i] == c)
			i++;
		i++;
	}
	// printf("\nhas null? %i", !str[i]);
	if (!str[i])
		count++;
	splits = (char **)ft_calloc(count, sizeof(char *));
	if (!splits)
		return (0);
	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			// printf("\narray modified 1");
			splits[k++] = ft_strtrim(ft_substr(str, j, i - j), &c);
			j = i;
			while (str[i] == c)
				i++;
		}
		i++;
		if (!str[i])
		{
			// printf("\narray modified 2");
			splits[k++] = ft_strtrim(ft_substr(str, j, i - j), &c);
		}
	}
	return (splits);
}
/*
int	main(void)
{
		 char *s = "      split       this for   me  !       ";
 
        char **result = ft_split(s, ' ');
        while (*result)
        {
                if (strcmp(*result, *expected))
                {
                        exit(TEST_FAILED);
                }
                result++;
                expected++;
        }
        exit(TEST_SUCCESS);
}*/