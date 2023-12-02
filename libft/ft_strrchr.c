/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:18:30 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/02 17:05:06 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// FIXME: arreglame cabron
char	*ft_strrchr(const char *s, int c)
{
	char	*found;

	found = 0;
	while (*s)
	{
		if (*s == c)
			found = (char *)s;
		s++;
	}
	return (found);
}
/*
int	main(void)
{
	char *str = "Let's see if you can find whatever you are looking for";
	char tgt;

	printf("String => \"%s\"\n\n", str);

	tgt = 'f';
	printf("Address of '%c':\n", tgt);
	printf("standard fn\t=> %p\n", strrchr(str, tgt));
	printf("custom fn\t=> %p\n\n", ft_strrchr(str, tgt));

	tgt = 'a';
	printf("Address of '%c':\n", tgt);
	printf("standard fn\t=> %p\n", strrchr(str, tgt));
	printf("custom fn\t=> %p\n\n", ft_strrchr(str, tgt));

	tgt = 'e';
	printf("Address of '%c':\n", tgt);
	printf("standard fn\t=> '%p'\n", strrchr(str, tgt));
	printf("custom fn\t=> '%p'\n\n", ft_strrchr(str, tgt));
}*/