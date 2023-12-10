/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 08:12:26 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/10 19:32:24 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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