/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_ftype.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:34:43 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/24 01:57:09 by judelgad         ###   ########.fr       */
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
/*
if (type == 'p')
	ft_print_pointer(ptr);
*/
	if (type == 'd' || type == 'i')
		res = ft_putstr(ft_itoa(va_arg(*ptr, int)));
/*
if (type == 'u')
	ft_print_unsigned(ptr);
if (type == 'x')
	ft_itohex(ptr, 0);
if (type == 'X')
	ft_itohex(ptr, 1);
*/
	if (type == '%')
		write(1, "%", 1);
	*count +=res;
	return (res);
}