/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:22:26 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/02 21:29:37 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char *src = "";
	char dst[59] = "Overwrite this part, the rest of the text will be the same";
	char dst2[10] = "Over";

	printf("Custom: before\t=> %s\n", dst2);
	ft_strlcpy(dst2, src, sizeof(dst2));
	printf("Custom: after\t=> %s\n", dst2);
}*/