/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:50:39 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/02 17:02:33 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

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