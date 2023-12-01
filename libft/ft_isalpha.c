/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:40:41 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/01 19:13:30 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1024);
	return (0);
}

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
}