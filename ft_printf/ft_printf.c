/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:45:41 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/23 18:28:45 by judelgad         ###   ########.fr       */
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
			ft_exec_ftype(*++str, ptr, count);
		else
			write(1, &(*str), 1);
		if (count == (unsigned int)-1)
			return (count);
		str++;
	}
	va_end(ptr);
	return (count);
}

int	main(void)
{
	ft_printf("%c", 'a');
}