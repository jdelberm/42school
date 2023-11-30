/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:02:19 by judelgad          #+#    #+#             */
/*   Updated: 2023/11/30 08:30:59 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TODO: review in python tutor if the amounts of NULL's added corresponds to N
// TODO: comment main after testing
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	while (i < n)
		str[i++] = '\0';
}

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
}