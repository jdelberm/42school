/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:30:00 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/05 16:57:27 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*chunk;

	if (start == 0 && len == (size_t)-1)
		return (ft_strdup(s));
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len >= ft_strlen(s))
		chunk = ft_calloc(ft_strlen(s) + 1 - start, sizeof(char));
	else
		chunk = ft_calloc(len + 1, sizeof(char));
	if (!chunk)
		return (0);
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