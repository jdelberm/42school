/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:08:31 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/17 20:20:29 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the given character is alphanumeric.
 *
 * This function checks if the character is either an uppercase letter,
 * a lowercase letter, or a digit.
 *
 * @param c The character to be checked.
 * @return 1 if the character is alphanumeric, 0 otherwise.
 */
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
int	main(void)
{
	char c;

	c = 'a';
	printf("Check if character '%c' is alnum:\n", c);
	printf("\tstandard fn\t=> %i\n", isalnum(c));
	printf("\tcustom fn\t=> %i\n\n", ft_isalnum(c));

	c = 'A';
	printf("Check if character '%c' is alnum:\n", c);
	printf("\tstandard fn\t=> %i\n", isalnum(c));
	printf("\tcustom fn\t=> %i\n\n", ft_isalnum(c));

	c = '0';
	printf("Check if character '%c' is alnum:\n", c);
	printf("\tstandard fn\t=> %i\n", isalnum(c));
	printf("\tcustom fn\t=> %i\n\n", ft_isalnum(c));

	c = '~';
	printf("Check if character '%c' is alnum:\n", c);
	printf("\tstandard fn\t=> %i\n", isalnum(c));
	printf("\tcustom fn\t=> %i\n\n", ft_isalnum(c));
}*/