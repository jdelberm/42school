/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:54:31 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/01 20:04:12 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(void)
{
	unsigned char c;

	c = 'a';
	printf("Passing '%c' to upper with\n", c);
	printf("standard fn\t=> '%c'\n", toupper(c));
	printf("custom fn\t=> '%c'\n\n", ft_toupper(c));

	c = '4';
	printf("Passing '%c' to upper with\n", c);
	printf("standard fn\t=> '%c'\n", toupper(c));
	printf("custom fn\t=> '%c'\n\n", ft_toupper(c));

	c = ' ';
	printf("Passing '%c' to upper with\n", c);
	printf("standard fn\t=> '%c'\n", toupper(c));
	printf("custom fn\t=> '%c'\n\n", ft_toupper(c));

	c = 127;
	printf("Passing '%c' to upper with\n", c);
	printf("standard fn\t=> '%c'\n", toupper(c));
	printf("custom fn\t=> '%c'\n\n", ft_toupper(c));
}