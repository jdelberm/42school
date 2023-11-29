/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:02:19 by judelgad          #+#    #+#             */
/*   Updated: 2023/11/29 15:16:49 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TODO: review in python tutor if the amounts of NULL's added corresponds to N
//TODO: comment main after testing
//TODO: review norminette
#include <string.h>
#include <stdio.h>
void ft_bzero(void *s, size_t n)
{
	char	*str;
	int		i;
	
	str = (char *) s;
	i = 0;
	while(i++ < n)
		str[i]= '\0';
}

int	main(void)
{
	char	str[26] = "Nullable past dot .string";
	char 	*ptr = &str[19];
	size_t	nullable = 1;

	printf("Standard: before modification => %s\n", str);
	bzero(ptr, nullable);
	printf("Standard: after nullying from '.' character => %s\n", nullable, str);

	str[26] = *"Nullable past dot .string";
	ptr = &str[19];
	nullable = 1;

	printf("Custom: before modification => %s\n", str);
	ft_bzero(ptr, nullable);
	printf("Custom: after nullying from '.' character => %s\n", nullable, str);
}