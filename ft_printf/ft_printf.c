/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:45:41 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/24 02:34:09 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>

int	ft_printf(char const *str, ...)
{
	va_list			ptr;
	unsigned int	count;

	va_start(ptr, str);
	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			if (ft_exec_ftype(*++str, &ptr, &count) == -1)
				return (-1);
		}
		else
			write(1, &(*str), 1);
		str++;
	}
	va_end(ptr);
	return (count);
}

int	main(void)
{
	int n;
	ft_printf("%c%%c%sc%i%d%c\n", 'x',"string", 1234,321, 'y');
	ft_printf("this is an unsigned int => %u\n", 4294967295);
	n = 4321;
	ft_printf("Number %i to hex =>\t\t%x\n", n, n);
	ft_printf("Number %i to hex in mayus =>\t%X\n", n, n);
}