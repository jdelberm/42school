/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_ftype.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:34:43 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/24 13:58:54 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>



int	ft_exec_ftype(char type, va_list *ptr, unsigned int *count)
{
	unsigned int	res;

	res = 0;
	if (type == 'c')
		res = ft_putchar(va_arg(*ptr, int));
	if (type == 's')
		res = ft_putstr(va_arg(*ptr, char *));
	if (type == 'p')
		ft_putptr(va_arg(*ptr, void *));
	if (type == 'd' || type == 'i')
		res = ft_putstr(ft_itoa(va_arg(*ptr, int)));
	if (type == 'u')
		ft_putunbr(va_arg(*ptr, unsigned int));
	if (type == 'x')
		ft_puthex(va_arg(*ptr, unsigned int),"0123456789abcdef", 0);
	if (type == 'X')
		ft_puthex(va_arg(*ptr, unsigned int), "0123456789ABCDEF", 1);
	if (type == '%')
		write(1, "%", 1);
	*count +=res;
	return (res);
}