/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:30:00 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/01 19:51:15 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*chunk;
	size_t	i;
	size_t	j;

	chunk = malloc(len * sizeof(char));
	if (!chunk)
		return (0);
	i = start;
	j = 0;
	while (s[i + j] && j < len)
	{
		chunk[j] = s[i + j];
		j++;
	}
	return (chunk);
}

int	main(void)
{
	char *str = "Hold my juice and watch this";
	char *substr;
	int start;
	int len;

	printf("String => \"%s\"\n\n", str);

	start = 5;
	len = 8;
	substr = ft_substr(str, start, len);
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
}