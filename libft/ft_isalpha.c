/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:40:41 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/07 06:25:15 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a character is an alphabetic character.
 *
 * This function checks if the given character is an alphabetic character,
 * which includes both uppercase and lowercase letters.
 *
 * @param c The character to be checked.
 * @return Returns 1024 if the character is an alphabetic character, otherwise
 *  returns 0.
 */
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1024);
	return (0);
}
/*
int	main(void)
{
	char c;

	c = 'a';
	printf("Check if character '%c' is alpha:\n", c);
	printf("\tstandard fn\t=> %i\n", isalpha(c));
	printf("\tcustom fn\t=> %i\n\n", ft_isalpha(c));

	c = '0';
	printf("Check if character '%c' is alpha:\n", c);
	printf("\tstandard fn\t=> %i\n", isalpha(c));
	printf("\tcustom fn\t=> %i\n\n", ft_isalpha(c));

	c = '~';
	printf("Check if character '%c' is alpha:\n", c);
	printf("\tstandard fn\t=> %i\n", isalpha(c));
	printf("\tcustom fn\t=> %i\n\n", ft_isalpha(c));
}*/