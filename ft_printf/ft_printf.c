/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:45:41 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/26 00:20:07 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>
#include <stdio.h>

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
	int	n;
	int *ptr;

	n=4321;
	ptr= &n;
	ft_printf("%c%%c%sc%i%d%c\n", 'x', "string", 1234, 321, 'y');
	ft_printf("Printing characters =>\t\t%cXXX%ca%c\n", 'a', 'b', '3');
	ft_printf("Printing numbers =>\t\t%ia%ib%dc\n", 123, 456, 789);
	ft_printf("Printing strings => non_var_\"%s\"_nonvar_\"%s\"\n", "var 1", "var2@ñ");
	ft_printf("this is an unsigned int =>\t%u\n", 4294967295);
	ft_printf("Number %i to hex =>\t\t%x\n", n, n);
	ft_printf("Number %i to hex in mayus =>\t%X\n", n, n);
	ft_printf("Pointer address of a pointer => %p", ptr);

	printf("\nSTANDARD PRINTS\n");
	printf("Printing the address of a pointer => %p", ptr);
}