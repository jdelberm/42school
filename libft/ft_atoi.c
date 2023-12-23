/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 20:28:30 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/16 09:03:39 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Converts a string to an integer.
 *
 * This function takes a string `ptr` and converts it to an integer.
 * It skips any leading whitespace characters and then checks for an optional
 *  sign.
 * After that, it iterates through the string and converts each digit to its
 *  corresponding integer value.
 * The resulting integer is multiplied by the sign and returned.
 *
 * @param ptr The string to convert to an integer.
 * @return The converted integer value.
 */
int	ft_atoi(const char *ptr)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while ((*ptr >= 9 && *ptr <= 13) || *ptr == 32)
		ptr++;
	if (*ptr == '-' || *ptr == '+')
	{
		if (*ptr == '-')
			sign *= -1;
		ptr++;
	}
	while (*ptr >= '0' && *ptr <= '9')
	{
		num = (num * 10) + (*ptr - 48);
		ptr++;
	}
	return (num * sign);
}
/*
int	main(void)
{
	char *str_a = "1234";
	printf("Conversion of %s to integer:\n", str_a);
	printf("\tstandard fn\t=> %i\n", atoi(str_a));
	printf("\tcustom fn\t=> %i\n", ft_atoi(str_a));

	char *str_b = "+1234";
	printf("Conversion of %s to integer:\n", str_b);
	printf("\tstandard fn\t=> %i\n", atoi(str_b));
	printf("\tcustom fn\t=> %i\n", ft_atoi(str_b));

	char *str_c = "++-1234";
	printf("Conversion of %s to integer:\n", str_c);
	printf("\tstandard fn\t=> %i\n", atoi(str_c));
	printf("\tcustom fn\t=> %i\n", ft_atoi(str_c));

	char *str_d = "-1234";
	printf("Conversion of %s to integer:\n", str_d);
	printf("\tstandard fn\t=> %i\n", atoi(str_d));
	printf("\tcustom fn\t=> %i\n", ft_atoi(str_d));

	char *str_e = "--1234";
	printf("Conversion of %s to integer:\n", str_e);
	printf("\tstandard fn\t=> %i\n", atoi(str_e));
	printf("\tcustom fn\t=> %i\n", ft_atoi(str_e));


	char *str_f = "1";
	printf("Conversion of %s to integer:\n", str_f);
	printf("\tstandard fn\t=> %i\n", atoi(str_f));
	printf("\tcustom fn\t=> %i\n", ft_atoi(str_f));

	char *str_g = "-2147483648";
	printf("Conversion of %s to integer:\n", str_g);
	printf("\tstandard fn\t=> %i\n", atoi(str_g));
	printf("\tcustom fn\t=> %i\n", ft_atoi(str_g));

	char *str_h = "2147483649";
	printf("Conversion of %s to integer:\n", str_h);
	printf("\tstandard fn\t=> %i\n", atoi(str_h));
	printf("\tcustom fn\t=> %i\n", ft_atoi(str_h));

}*/