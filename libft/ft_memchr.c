/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:34:41 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/01 19:16:27 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ustr;
	size_t			i;

	ustr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ustr[i] == (unsigned char)c)
			return (&ustr[i]);
		i++;
	}
	return (0);
}
int	main(void)
{
	char *str = "This is an array of characters";
	size_t nbytes;
	int tgt;

	nbytes = 10;
	tgt = 'a';
	printf("String => \"%s\"\n\n", str);
	printf("Looking for char '%c' in %li characters:\n", tgt, nbytes);
	printf("standard fn\t=> '%p'\n", memchr(str, tgt, nbytes));
	printf("custom fn\t=> '%p'\n\n", ft_memchr(str, tgt, nbytes));

	nbytes = 5;
	printf("Looking for char '%c' in %li characters:\n", tgt, nbytes);
	printf("standard fn\t=> '%p'\n", memchr(str, tgt, nbytes));
	printf("custom fn\t=> '%p'\n\n", ft_memchr(str, tgt, nbytes));
	nbytes = 5;

	nbytes = 30;
	tgt = 'e';
	printf("Looking for char '%c' in %li characters:\n", tgt, nbytes);
	printf("standard fn\t=> '%p'\n", memchr(str, tgt, nbytes));
	printf("custom fn\t=> '%p'\n\n", ft_memchr(str, tgt, nbytes));

	nbytes = 31;
	tgt = '\0';
	printf("Looking for char '%c' in %li characters:\n", tgt, nbytes);
	printf("standard fn\t=> '%p'\n", memchr(str, tgt, nbytes));
	printf("custom fn\t=> '%p'\n\n", ft_memchr(str, tgt, nbytes));
}