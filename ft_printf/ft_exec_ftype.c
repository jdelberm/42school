/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_ftype.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:34:43 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/27 00:54:58 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdarg.h>
#include <stdio.h>

int	ft_exec_ftype(char type, va_list *ptr, int *count)
{
	if (type == 'c')
		ft_putchar(va_arg(*ptr, int), count);
	if (type == 's')
		ft_putstr(va_arg(*ptr, char *), count);
	if (type == 'p')
		ft_putptr(va_arg(*ptr, unsigned long long), count);
	if (type == 'd' || type == 'i')
		ft_putnbr_base(va_arg(*ptr, int), "0123456789", count);
	if (type == 'u')
		ft_putnbr_base(va_arg(*ptr, unsigned int), "0123456789", count);
	if (type == 'x')
		ft_putnbr_base(va_arg(*ptr, unsigned int), "0123456789abcdef", count);
	if (type == 'X')
		ft_putnbr_base(va_arg(*ptr, unsigned int), "0123456789ABCDEF", count);
	if (type == '%')
		ft_putchar('%', count);
	return (*count != -1);
}
