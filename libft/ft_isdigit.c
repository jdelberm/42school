/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:45:15 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/01 19:10:31 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (2048);
	return (0);
}

int	main(void)
{
	char c;

	c = 'a';
	printf("Check if character '%c' is digit:\n", c);
	printf("\tstandard fn\t=> %i\n", isdigit(c));
	printf("\tcustom fn\t=> %i\n\n", ft_isdigit(c));

	c = '0';
	printf("Check if character '%c' is digit:\n", c);
	printf("\tstandard fn\t=> %i\n", isdigit(c));
	printf("\tcustom fn\t=> %i\n\n", ft_isdigit(c));
}