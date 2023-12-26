/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:45:41 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/26 10:08:15 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>
#include <stdio.h>

int	ft_printf(char const *str, ...)
{
	va_list	ptr;
	int		count;

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
			ft_putchar(*str, &count);
		str++;
	}
	va_end(ptr);
	return (count);
}
