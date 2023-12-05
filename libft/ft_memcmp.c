/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:56:21 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/05 11:43:21 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
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
	while (us1[i] == us2[i] && i < n - 1)
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
	printf("\tstandard fn\t=> %i\n", memcmp(str_a, str_b, len));
	printf("\tcustom fn\t=> %i\n\n", ft_memcmp(str_a, str_b, len));

	len = 1;
	printf("Compare %li char/s of \"%s\" & \"%s\":\n", len, str_c, str_d);
	printf("\tstandard fn\t=> %i\n", memcmp(str_c, str_d, len));
	printf("\tcustom fn\t=> %i\n\n", ft_memcmp(str_c, str_d, len));

	len = 11;
	printf("Compare %li char/s of \"%s\" & \"%s\":\n", len, str_e, str_f);
	printf("\tstandard fn\t=> %i\n", memcmp(str_e, str_f, len));
	printf("\tcustom fn\t=> %i\n\n", ft_memcmp(str_e, str_f, len));

	len = 18;
	printf("Compare %li char/s of \"%s\" & \"%s\":\n", len, str_g, str_h);
	printf("\tstandard fn\t=> %i\n", memcmp(str_g, str_h, len));
	printf("\tcustom fn\t=> %i\n\n", ft_memcmp(str_g, str_h, len));
}*/