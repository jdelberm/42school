/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:06:31 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/02 17:03:44 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (0);
}
/*
int	main(void)
{
	char *str = "Let's see if you can find whatever you are looking for";
	char tgt;

	printf("String => \"%s\"\n\n", str);

	tgt = 'f';
	printf("Address of '%c':\n", tgt);
	printf("standard fn\t=> %p\n", strchr(str, tgt));
	printf("custom fn\t=> %p\n\n", ft_strchr(str, tgt));

	tgt = 'c';
	printf("Address of '%c':\n", tgt);
	printf("standard fn\t=> %p\n", strchr(str, tgt));
	printf("custom fn\t=> %p\n\n", ft_strchr(str, tgt));

	tgt = 'v';
	printf("Address of '%c':\n", tgt);
	printf("standard fn\t=> %p\n", strchr(str, tgt));
	printf("custom fn\t=> %p\n\n", ft_strchr(str, tgt));
}*/