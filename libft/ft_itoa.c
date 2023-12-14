/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 08:12:26 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/14 07:45:21 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Calculates the number of digits in an integer.
 *
 * @param n The integer for which to calculate the number of digits.
 * @return The number of digits in the integer.
 */
int	ft_nbrlen(int n)
{
	size_t			nlen;
	unsigned int	cast;

	nlen = 1;
	cast = n;
	if (n < 0)
	{
		nlen++;
		cast *= -1;
	}
	while (cast > 9)
	{
		cast /= 10;
		nlen++;
	}
	return (nlen);
}

/**
 * @brief Converts an integer to a string.
 *
 * This function takes an integer as input and converts it into a string
 * representation.
 * The resulting string is allocated and must be freed by the caller.
 *
 * @param n The integer to be converted.
 * @return The string representation of the integer.
 */
char	*ft_itoa(int n)
{
	char			*s;
	size_t			nlen;
	unsigned int	cast;

	cast = n;
	nlen = ft_nbrlen(cast);
	s = ft_calloc(nlen + 1, sizeof(char));
	if (!s)
		return (0);
	s[0] = '0';
	if (n < 0)
	{
		s[0] = '-';
		cast *= -1;
	}
	while (cast > 0)
	{
		s[--nlen] = (cast % 10) + 48;
		cast /= 10;
	}
	return (s);
}
/*
int	main(void)
{
	int	n;

	n = -2147483648;
	printf("Itoa of %i => \"%s\"\n", n, ft_itoa(n));
}
*/