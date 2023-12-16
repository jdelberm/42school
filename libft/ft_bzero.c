/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:02:19 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/16 09:06:15 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * Sets the first 'n' bytes of the memory pointed to by 's' to zero.
 *
 * @param s - Pointer to the memory to be zeroed.
 * @param n - Number of bytes to be zeroed.
 */
void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
		str[i++] = '\0';
}
/*
int	main(void)
{
	char str[26] = "To null past dot: .string";
	char *ptr = &str[19];
	size_t nullable = 1;

	printf("Standard: before modification =>\t\t'%s'\n", str);
	bzero(ptr, nullable);
	printf("Standard: after nullying from '.' character =>\t'%s'\n", str);

	char str2[26] = "To null past one: 1string";
	ptr = &str2[19];

	printf("Custom: before modification =>\t\t\t'%s'\n", str2);
	ft_bzero(ptr, nullable);
	printf("Custom: after nullying from '.' character =>\t'%s'\n", str2);
}*/