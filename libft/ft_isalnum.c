/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:08:31 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/02 21:31:17 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || (c >= 'a'
			&& c <= 'z'))
		return (8);
	return (0);
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