/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:53:00 by judelgad          #+#    #+#             */
/*   Updated: 2023/11/30 07:46:30 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;
	char	*str_src;
	char	*str_dest;
	size_t	i;

	tmp = malloc(n * sizeof(char));
	str_src = (char *)src;
	str_dest = (char *)dest;
	i = 0;
	while (i < n)
	{
		tmp[i] = str_src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		str_dest[i] = tmp[i];
		i++;
	}
	return dest;
}

int	main(void)
{
	/**
		* What actually means that the strings can overlap?
		* A great example can be found in the following answer:
		* https://cs50.stackexchange.com/a/14729
		*/
	char dest[33] = "It was a pleasure, I have to go!";
	char dest2[33] = "It was a pleasure, I have to go!";
	char *src = "Please real quick";
	size_t nbytes = 17;

	printf("Standard: before\t=> '%s'\n", dest);
	memmove(dest, src, nbytes);
	printf("Standard: after\t\t=> '%s'\n\n", dest);

	printf("Custom: before\t=> '%s'\n", dest2);
	ft_memmove(dest2, src, nbytes);
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
	memmove(pdest, psrc, nbytes);
	printf("Standard: after\t\t=> '%s'\n\n", sentence);

	pdest = &sentence2[2];
	psrc = &sentence2[0];

	printf("Custom: before\t=> '%s'\n", sentence2);
	ft_memmove(pdest, psrc, nbytes);
	printf("Custom: after\t=> '%s'\n\n", sentence2);
}