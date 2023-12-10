/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 08:12:26 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/10 10:41:41 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(int n)
{
	size_t	nlen;

	nlen = 1;
	if (n < 0)
	{
		nlen++;
		n = -n;
	}
	while (n > 9)
	{
		n /= 10;
		nlen++;
	}
	return (nlen);
}

/*
// Find the string size
//	Get the natural part of the number
//	Get the decimal part of the number
// Allocate the string
*/
/*
// While the number is greater than 9
//	Divide it by 10
//	If lower than 10
//		Convert to character and add to the string
//	Else if higher or equal than 10
//		Divide again
//	Get the mod of the operation
// Return the string
*/
char	*ft_itoa(int n)
{
	char	*s;
	size_t	nlen;

	nlen = ft_nbrlen(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!n)
		return (ft_strdup("0"));
	s = ft_calloc(nlen + 1, sizeof(char));
	if (!s)
		return (0);
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		s[--nlen] = (n % 10) + 48;
		n /= 10;
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