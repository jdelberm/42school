/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:54:31 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/07 06:23:16 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

/**
 * @brief Converts a lowercase letter to its corresponding uppercase letter.
 *
 * This function takes an integer representing a character and checks if it is
 *  a lowercase letter.
 * If it is, it converts it to its corresponding uppercase letter by subtracting
 *  32 from its ASCII value.
 * If the character is not a lowercase letter, it is returned as is.
 *
 * @param c The character to be converted.
 * @return The uppercase version of the character if it is a lowercase letter,
 *  otherwise the character itself.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	unsigned char c;

	c = 'a';
	printf("Passing '%c' to upper with\n", c);
	printf("standard fn\t=> '%c'\n", toupper(c));
	printf("custom fn\t=> '%c'\n\n", ft_toupper(c));

	c = '4';
	printf("Passing '%c' to upper with\n", c);
	printf("standard fn\t=> '%c'\n", toupper(c));
	printf("custom fn\t=> '%c'\n\n", ft_toupper(c));

	c = ' ';
	printf("Passing '%c' to upper with\n", c);
	printf("standard fn\t=> '%c'\n", toupper(c));
	printf("custom fn\t=> '%c'\n\n", ft_toupper(c));

	c = 127;
	printf("Passing '%c' to upper with\n", c);
	printf("standard fn\t=> '%c'\n", toupper(c));
	printf("custom fn\t=> '%c'\n\n", ft_toupper(c));
}*/