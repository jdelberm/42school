/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:54:46 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/04 00:26:32 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TODO: check in pythontutor
// TODO: comment main
// TODO: verify norminette

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	int		i;

	dst = malloc(ft_strlen(s) + 1 * sizeof(char));
	if (!dst)
		return (0);
	i = 0;
	while (s[i])
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = s[i];
	return (dst);
}
/*
int	main(void)
{
	char *src = "This string will be duplicated";
	printf("Result of duplicating \"%s\" into dst variable:\n", src);
	printf("\tstandard fn\t=> %s\n", strdup(src));
	printf("\tcustom fn\t=> %s\n", ft_strdup(src));

	char *src2 = "";
	printf("Result of duplicating \"%s\" into dst variable:\n", src2);
	printf("\tstandard fn\t=> %s\n", strdup(src2));
	printf("\tcustom fn\t=> %s\n", ft_strdup(src2));
}*/