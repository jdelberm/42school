/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:30:00 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/07 06:19:00 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/**
 * Copies a substring from the given string starting at the specified index
 * and with the specified length.
 *
 * @param s The string to extract the substring from.
 * @param start The starting index of the substring.
 * @param len The length of the substring.
 * @return The extracted substring, or NULL if memory allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*chunk;

	if (start == 0 && len == (size_t)-1)
		return (ft_strdup(s));
	else if (start >= ft_strlen(s))
		return (ft_strdup(""));
	else if (len >= ft_strlen(s))
	{
		chunk = ft_calloc(ft_strlen(s) + 1 - start, sizeof(char));
		if (!chunk)
			return (0);
	}
	else if (start + len >= ft_strlen(s))
		return (ft_strdup(&s[start]));
	else
	{
		chunk = ft_calloc(len + 1, sizeof(char));
		if (!chunk)
			return (0);
	}
	ft_strlcpy(chunk, &s[start], len + 1);
	return (chunk);
}
/*
int	main(void)
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	*substr;
	int start;
	int len;

	printf("String => \"%s\"\n\n", str);

	start = 5;
	len = 8;
	substr = ft_substr(str, 0, 10);
	printf("Substring of %i characters at index %i returns:\n", start, len);
	printf("\tcustom fn\t=> \"%s\"\n\n", substr);

	start = 18;
	len = 10;
	substr = ft_substr(str, start, len);
	printf("Substring of %i characters at index %i returns:\n", start, len);
	printf("\tcustom fn\t=> \"%s\"\n\n", substr);

	start = 50;
	len = 10;
	substr = ft_substr(str, start, len);
	printf("Substring of %i characters at index %i returns:\n", start, len);
	printf("\tcustom fn\t=> \"%s\"\n\n", substr);
}*/