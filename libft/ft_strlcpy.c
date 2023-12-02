/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:22:26 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/02 20:36:30 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = (size_t)ft_strlen((char *)src);
	if (size == 0)
	{

	dst[size] = 0;
		return (src_len);
	}
	i = 0;
	/*
	while (i < size - 1 && src_len)
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
	}*/
	while (i < size - 1 && src_len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[size - 1] = 0;
	return (src_len);
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