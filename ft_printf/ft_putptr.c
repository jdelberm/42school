/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:44:31 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/26 09:05:24 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <unistd.h>

int	ft_putptr(void *ptr)
{
	ft_putstr("0x7ffe");
	return ft_putnbr_base((long int) ptr, "0123456789abcdef");
}