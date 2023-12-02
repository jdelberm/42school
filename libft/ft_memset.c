/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:15:03 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/02 21:33:45 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ustr;

	ustr = (unsigned char *)s;
	while (n--)
		*ustr++ = (unsigned char)c;
	return (s);
}
/*
int	main(void)
{
	char str[31] = "This is an array of characters";
	unsigned char *rt;
	size_t nbytes;
	int c;

	printf("String => \"%s\"\n\n", str);

	nbytes = 4;
	c = 'a';
	printf("Filling with char '%c' in %li characters:\n", c, nbytes);
	rt = (unsigned char *)memset(str, c, nbytes);
	printf("standard fn\t=> '%s'\n", rt);
	rt = (unsigned char *)ft_memset(str, c, nbytes);
	printf("custom fn\t=> '%s'\n\n", rt);

	nbytes = 5;
	c = 100;
	printf("Filling with char '%c' in %li characters:\n", c, nbytes);
	rt = (unsigned char *)memset(str, c, nbytes);
	printf("standard fn\t=> '%s'\n", rt);
	rt = (unsigned char *)ft_memset(str, c, nbytes);
	printf("custom fn\t=> '%s'\n\n", rt);

	nbytes = 35;
	c = 'e';
	printf("Filling with char '%c' in %li characters:\n", c, nbytes);
	rt = (unsigned char *)memset(str, c, nbytes);
	printf("standard fn\t=> '%s'\n", rt);
	rt = (unsigned char *)ft_memset(str, c, nbytes);
	printf("custom fn\t=> '%s'\n\n", rt);

	nbytes = 31;
	c = '\0';
	printf("Filling with char '%c' in %li characters:\n", c, nbytes);
	rt = (unsigned char *)memset(str, c, nbytes);
	printf("standard fn\t=> '%s'\n", rt);
	rt = (unsigned char *)ft_memset(str, c, nbytes);
	printf("custom fn\t=> '%s'\n\n", rt);
}*/