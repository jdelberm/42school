/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:06:31 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/07 06:20:37 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/**
 * Searches for the first occurrence of a character in a string.
 *
 * @param s The string to search in.
 * @param c The character to search for.
 * @return A pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found.
 */
char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;

	uc = c;
	while (*s)
	{
		if (*s == uc)
			return ((char *)s);
		s++;
	}
	if (*s == uc)
		return ((char *)s);
	return (0);
}
/*
int	main(void)
{
	char *str = "Let's see if you can find whatever you are looking for";
	char tgt;

	printf("String => \"%s\"\n\n", str);

	tgt = 'f';
	printf("Address of '%c':\n", tgt);
	printf("standard fn\t=> %p\n", strchr(str, tgt));
	printf("custom fn\t=> %p\n\n", ft_strchr(str, tgt));

	tgt = 'c';
	printf("Address of '%c':\n", tgt);
	printf("standard fn\t=> %p\n", strchr(str, tgt));
	printf("custom fn\t=> %p\n\n", ft_strchr(str, tgt));

	tgt = 'v';
	printf("Address of '%c':\n", tgt);
	printf("standard fn\t=> %p\n", strchr(str, tgt));
	printf("custom fn\t=> %p\n\n", ft_strchr(str, tgt));
}*/