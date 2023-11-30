/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:22:26 by judelgad          #+#    #+#             */
/*   Updated: 2023/11/30 18:53:10 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (dst[i])
	{
		if (src[i])
		{
			dst[i] = src[i];
			i++;
		}
		else
		{
			while (i < size)
			{
				dst[i] = '\0';
				i++;
			}
		}
	}
}

int	main(void)
{
	char *src = "Start of a sentence";
	char dst[59] = "Overwrite this part, the rest of the text will be the same";

	printf("Custom: before\t=> %s\n", dst);
	ft_strlcpy(dst, src, sizeof(dst));
	printf("Custom: after\t=> %s\n", dst);
}