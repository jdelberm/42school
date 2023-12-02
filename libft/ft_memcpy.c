/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:21:17 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/02 21:33:36 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TODO: comment main after testing
// TODO: review code in pythontutor
// TODO: review norminette

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*str_dest;
	char	*str_src;

	str_dest = (char *)dest;
	str_src = (char *)src;
	i = 0;
	while (i < n)
	{
		str_dest[i] = str_src[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char dest[33] = "It was a pleasure, I have to go!";
	char dest2[33] = "It was a pleasure, I have to go!";
	char *src = "Please real quick";
	size_t nbytes = 17;

	printf("Standard: before\t=> '%s'\n", dest);
	memcpy(dest, src, nbytes);
	printf("Standard: after\t\t=> '%s'\n\n", dest);

	printf("Custom: before\t=> '%s'\n", dest2);
	ft_memcpy(dest2, src, nbytes);
	printf("Custom: after\t=> '%s'\n\n", dest2);

	printf("Aditional: simulating overlap\n\n");
	char sentence[6] = "abcde";
	char sentence2[6] = "abcde";
	char *pdest;
	char *psrc;

	nbytes = 3;

	pdest = &sentence[2];
	psrc = &sentence[0];

	printf("Standard: before\t=> '%s'\n", sentence);
	memcpy(pdest, psrc, nbytes);
	printf("Standard: after\t\t=> '%s'\n\n", sentence);

	pdest = &sentence2[2];
	psrc = &sentence2[0];

	printf("Custom: before\t=> '%s'\n", sentence2);
	ft_memcpy(pdest, psrc, nbytes);
	printf("Custom: after\t=> '%s'\n\n", sentence2);
}*/