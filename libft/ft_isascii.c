/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:48:06 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/15 12:56:41 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the given character is a valid ASCII character.
 *
 * This function checks if the given character falls within the range of ASCII
 *  characters,
 * which is from 0 to 127 (inclusive).
 *
 * @param c The character to be checked.
 * @return 1 if the character is a valid ASCII character, 0 otherwise.
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int	main(void)
{
	int c;

	c = '~';
	printf("Check if character '%c' is ascii:\n", c);
	printf("\tstandard fn\t=> %i\n", isascii(c));
	printf("\tcustom fn\t=> %i\n\n", ft_isascii(c));

	c = 128;
	printf("Check if character '%c' is alpha:\n", c);
	printf("\tstandard fn\t=> %i\n", isascii(c));
	printf("\tcustom fn\t=> %i\n\n", ft_isascii(c));
}*/