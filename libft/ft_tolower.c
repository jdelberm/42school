/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:04:49 by judelgad          #+#    #+#             */
/*   Updated: 2023/11/30 19:06:22 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int	main(void)
{
	unsigned char c;

	c = 'A';
	printf("Passing '%c' to lower with\n", c);
	printf("standard fn\t=> '%c'\n", tolower(c));
	printf("custom fn\t=> '%c'\n\n", ft_tolower(c));

	c = 'Z';
	printf("Passing '%c' to lower with\n", c);
	printf("standard fn\t=> '%c'\n", tolower(c));
	printf("custom fn\t=> '%c'\n\n", ft_tolower(c));

	c = ' ';
	printf("Passing '%c' to lower with\n", c);
	printf("standard fn\t=> '%c'\n", tolower(c));
	printf("custom fn\t=> '%c'\n\n", ft_tolower(c));

	c = '€';
	printf("Passing '%c' to lower with\n", c);
	printf("standard fn\t=> '%c'\n", tolower(c));
	printf("custom fn\t=> '%c'\n\n", ft_tolower(c));
}