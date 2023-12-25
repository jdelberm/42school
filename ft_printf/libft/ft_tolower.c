/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:04:49 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/07 06:22:56 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

/**
 * Converts an uppercase letter to lowercase.
 *
 * The ft_tolower() function converts the character 'c' to lowercase if it is
 *  an uppercase letter.
 * If 'c' is not an uppercase letter, it remains unchanged.
 *
 * @param c The character to be converted.
 * @return The lowercase equivalent of 'c' if it is an uppercase letter,
 *  otherwise 'c' remains unchanged.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
int	main(void)
{
	unsigned char c;

	c = 'A';
	printf("Passing '%c' to lower with\n", c);
	printf("standard fn\t=> '%c'\n", tolower(c));
	printf("custom fn\t=> '%c'\n\n", ft_tolower(c));

	c = 'Z';
	printf("Passing '%c' to lower with\n", c);
	printf("standard fn\t=> '%c'\n", tolower(c));
	printf("custom fn\t=> '%c'\n\n", ft_tolower(c));

	c = ' ';
	printf("Passing '%c' to lower with\n", c);
	printf("standard fn\t=> '%c'\n", tolower(c));
	printf("custom fn\t=> '%c'\n\n", ft_tolower(c));

	c = 127;
	printf("Passing '%c' to lower with\n", c);
	printf("standard fn\t=> '%c'\n", tolower(c));
	printf("custom fn\t=> '%c'\n\n", ft_tolower(c));
}*/