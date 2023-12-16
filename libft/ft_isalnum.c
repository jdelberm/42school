/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:08:31 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/16 09:13:19 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return ((c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || (c >= 'a'
			&& c <= 'z'));
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