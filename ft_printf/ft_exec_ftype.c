/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_ftype.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:34:43 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/23 18:31:17 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>

int	ft_exec_ftype(char type, va_list ptr, unsigned int count)
{
	if (type == 'c')
		count = ft_putchar(ptr);
	/*
if (type == 's')
	ft_putstr(ptr);
if (type == 'p')
	ft_print_pointer(ptr);
if (type == 'd' || type == 'i')
	ft_itoa(ptr);
if (type == 'u')
	ft_print_unsigned(ptr);
if (type == 'x')
	ft_itohex(ptr, 0);
if (type == 'X')
	ft_itohex(ptr, 1);
if (type == '%')
	write(1, "%", 1);*/
	return (-1);
}