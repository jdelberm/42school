/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:28:36 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/07 06:25:31 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TODO: copy ft_strncmp from C03: ex01

#include <stdio.h>
#include <string.h>

/**
 * @brief Compares two strings up to a specified number of characters.
 *
 * This function compares the first `n` characters of the strings `s1` and `s2`.
 * The comparison is done using unsigned characters, so the result is always
 * the difference between the ASCII values of the characters being compared.
 *
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @param n The maximum number of characters to compare.
 * @return An integer greater than, equal to, or less than 0, depending on
 *  whether `s1` is greater than, equal to, or less than `s2`.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*us1;
	unsigned char	*us2;
	size_t			i;
	int				res;

	if (n == 0)
		return (0);
	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	i = 0;
	while (us1[i] && us2[i] && us1[i] == us2[i] && i < n - 1)
		i++;
	res = us1[i] - us2[i];
	return (res);
}
/*
int	main(void)
{
	char *str_a = "";
	char *str_b = "";

	char *str_c = "H";
	char *str_d = "";

	char *str_e = "Size x";
	char *str_f = "Size x + 4";

	char *str_g = "Equally evaluated";
	char *str_h = "Equally considered";
	size_t len;

	len = 1;
	printf("Compare %li char/s of \"%s\" & \"%s\":\n", len, str_a, str_b);
	printf("\tstandard fn\t=> %i\n", strncmp(str_a, str_b, len));
	printf("\tcustom fn\t=> %i\n\n", ft_strncmp(str_a, str_b, len));

	len = 1;
	printf("Compare %li char/s of \"%s\" & \"%s\":\n", len, str_c, str_d);
	printf("\tstandard fn\t=> %i\n", strncmp(str_c, str_d, len));
	printf("\tcustom fn\t=> %i\n\n", ft_strncmp(str_c, str_d, len));

	len = 11;
	printf("Compare %li char/s of \"%s\" & \"%s\":\n", len, str_e, str_f);
	printf("\tstandard fn\t=> %i\n", strncmp(str_e, str_f, len));
	printf("\tcustom fn\t=> %i\n\n", ft_strncmp(str_e, str_f, len));

	len = 18;
	printf("Compare %li char/s of \"%s\" & \"%s\":\n", len, str_g, str_h);
	printf("\tstandard fn\t=> %i\n", strncmp(str_g, str_h, len));
	printf("\tcustom fn\t=> %i\n\n", ft_strncmp(str_g, str_h, len));
}*/