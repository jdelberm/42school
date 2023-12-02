/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 20:24:39 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/02 17:38:52 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	tf_size;
	char	*found;

	tf_size = ft_strlen(to_find);
	if (!tf_size)
		return (str);
	found = 0;
	i = -1;
	while (str[++i] && i < len && !found)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (to_find[j] && str[i + j] == to_find[j])
				j++;
			if (j == tf_size)
				found = &str[i];
		}
	}
	return (found);
}
/*
int	main(void)
{
	char haystack[] = "Buscando la aguja en el pajar";
	char needle[] = "aguja";

	printf("HSTACK: <%s>\n", haystack);
	printf("NEEDLE: <%s>\n", needle);
	printf("RESULT (CST): <%s>\n", ft_strstr(haystack, needle));
	printf("RESULT (STD): <%s>\n", strstr(haystack, needle));

	char haystack2[] = "Buscando la aguja en el pajar";
	char needle2[] = "agrasergh";

	printf("HSTACK: <%s>\n", haystack2);
	printf("NEEDLE: <%s>\n", needle2);
	printf("RESULT (CST): <%s>\n", ft_strstr(haystack2, needle2));
	printf("RESULT (STD): <%s>\n", strstr(haystack2, needle2));

	char haystack4[] = " ";
	char needle4[] = " ";

	printf("HSTACK: %s\n", haystack4);
	printf("NEEDLE: %s\n", needle4);
	printf("RESULT (CST): <%s>\n", ft_strstr(haystack4, needle4));
	printf("RESULT (STD): <%s>\n", strstr(haystack4, needle4));
}*/
