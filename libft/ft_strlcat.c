/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:44:30 by judelgad          #+#    #+#             */
/*   Updated: 2023/11/30 18:53:43 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (i + j < size)
	{
		if (src[j])
		{
			dst[i + j] = src[j];
			j++;
		}
		else
		{
			while (i + j <= size - 1)
			{
				dst[i + j] = '\0';
				j++;
			}
		}
	}
}

int	main(void)
{
	char *src = " this other text";
	char dst[45] = "Concatenate to this string";

	printf("Custom: before\t=> %s\n", dst);
	ft_strlcat(dst, src, sizeof(dst));
	printf("Custom: after\t=> %s\n", dst);
}