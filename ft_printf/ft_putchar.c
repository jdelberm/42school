/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 18:10:09 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/23 18:35:29 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar(va_list ptr)
{
	int c;

	c = va_arg(ptr, int);
	write(1, &c, 1);
	return (1);
}