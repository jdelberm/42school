/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:50:39 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/14 07:53:25 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the given character is a printable character.
 *
 * @param c The character to be checked.
 * @return 1 if the character is a printable character, 0 otherwise.
 */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	return (0);
}
/*
int	main(void)
{
	char c;

	c = '~';
	printf("Check if character '%c' is ascii:\n", c);
	printf("\tstandard fn\t=> %i\n", isprint(c));
	printf("\tcustom fn\t=> %i\n\n", ft_isprint(c));

	c = '\t';
	printf("Check if character '%c' is alpha:\n", c);
	printf("\tstandard fn\t=> %i\n", isprint(c));
	printf("\tcustom fn\t=> %i\n\n", ft_isprint(c));
}*/