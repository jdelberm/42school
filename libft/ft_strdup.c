/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:54:46 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/02 17:03:51 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TODO: check in pythontutor
// TODO: comment main
// TODO: verify norminette

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*dst;
	int		i;

	dst = malloc(ft_strlen(s) * sizeof(char));
	i = 0;
	while (s[i])
	{
		dst[i] = s[i];
		i++;
	}
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