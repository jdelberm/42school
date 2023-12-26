/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_ftype.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:34:43 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/26 10:04:54 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>

int	ft_exec_ftype(char type, va_list *ptr, int *count)
{
	unsigned int	res;

	res = 0;
	if (type == 'c')
		ft_putchar(va_arg(*ptr, int), count);
	if (type == 's')
		ft_putstr(va_arg(*ptr, char *), count);
	if (type == 'p')
		ft_putptr(va_arg(*ptr, void *), count);
	if (type == 'd' || type == 'i')
		res = ft_putnbr_base(va_arg(*ptr, int), "0123456789", count);
	if (type == 'u')
		ft_putnbr_base(va_arg(*ptr, unsigned int), "0123456789", count);
	if (type == 'x')
		ft_puthex(va_arg(*ptr, unsigned int), "0123456789abcdef", 0, count);
	if (type == 'X')
		ft_puthex(va_arg(*ptr, unsigned int), "0123456789ABCDEF", 1, count);
	if (type == '%')
		ft_putchar('%', count);
	return (res);
}