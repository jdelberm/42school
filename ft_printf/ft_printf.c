/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:45:41 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/24 01:57:17 by judelgad         ###   ########.fr       */
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
	ft_printf("%c%%c%sc%i%d%c", 'x',"string", 1234,321, 'y');
}