/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:44:30 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/07 06:24:20 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TODO: understand the code
#include "libft.h"

/**
 * Concatenates the string pointed to by src to the end of the string pointed
 *  to by dst.
 * The total length of the resulting string is limited to size-1 characters.
 * The resulting string is always null-terminated.
 *
 * @param dst   The destination string.
 * @param src   The source string.
 * @param size  The size of the destination buffer.
 * @return      The total length of the resulting string.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = 0;
	while (dst[dst_len] && dst_len < size)
		dst_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	i = dst_len;
	j = 0;
	while (src[j] && i + 1 < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (dst_len < size)
		dst[i] = '\0';
	return (dst_len + src_len);
}
/*
int	main(void)
{
	char *src = " this other text";
	char dst[45] = "Concatenate to this string";
	int val;

	printf("Concatenation of the following strings:\n");
	printf("\tString 1\t=> \"%s\"\n", src);
	printf("\tString 2\t=> \"%s\"\n", dst);
	val = ft_strlcat(dst, src, sizeof(dst));
	printf("\tcustom fn (return: %i)\t=> \"%s\"\n", val, dst);
}*/