/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:48:06 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/01 19:10:29 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	main(void)
{
	char c;

	c = '~';
	printf("Check if character '%c' is ascii:\n", c);
	printf("\tstandard fn\t=> %i\n", isascii(c));
	printf("\tcustom fn\t=> %i\n\n", ft_isascii(c));

	c = 128;
	printf("Check if character '%c' is alpha:\n", c);
	printf("\tstandard fn\t=> %i\n", isascii(c));
	printf("\tcustom fn\t=> %i\n\n", ft_isascii(c));
}