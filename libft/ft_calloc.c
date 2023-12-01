/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:40:36 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/01 15:53:30 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	if (nmemb == 0 || size == 0)
		return (&"\0");
	return (malloc(nmemb * size));
}

int	main(void)
{
	char *sentence = "This is a sentence";
	char *sentence2 = "Another a sentence";
	char *dest_cust;
	char *dest_std;

	dest_std = calloc(sizeof(sentence), sizeof(char));
	dest_cust = ft_calloc(sizeof(sentence), sizeof(char));

	dest_std = sentence;
	dest_cust = sentence;
	printf("Destiny string with sentence 1:\n");
	printf("\tstandard\t=> %s\n", dest_std);
	printf("\tstandard\t=> %s\n\n", dest_cust);

	dest_std = sentence2;
	dest_cust = sentence2;
	printf("Destiny string with sentence 1:\n");
	printf("\tstandard\t=> %s\n", dest_std);
	printf("\tstandard\t=> %s\n\n", dest_cust);

	dest_std = calloc(0, sizeof(char));
	dest_cust = ft_calloc(0, sizeof(char));
	printf("Destiny string with nmemb == 0:\n");
	printf("\tstandard\t=> %s\n", dest_std);
	printf("\tstandard\t=> %s\n\n", dest_cust);

	dest_std = calloc(sizeof(sentence), 0);
	dest_cust = ft_calloc(sizeof(sentence), 0);
	printf("Destiny string with size == 0:\n");
	printf("\tstandard\t=> %s\n", dest_std);
	printf("\tstandard\t=> %s\n\n", dest_cust);

	dest_std = calloc(0, 0);
	dest_cust = ft_calloc(0, 0);
	printf("Destiny string with nmemb == 0 && size == 0:\n");
	printf("\tstandard\t=> %s\n", dest_std);
	printf("\tstandard\t=> %s\n\n", dest_cust);
}