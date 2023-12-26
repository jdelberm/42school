/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:44:31 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/27 00:44:33 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdint.h>

void	ft_putptr(unsigned long long ptr, int *count)
{
	ft_putstr("0x", count);
	if (ptr >= 16)
	{
		ft_putnbr_base(ptr / 16, "0123456789abcdef", count);
		ft_putnbr_base(ptr % 16, "0123456789abcdef", count);
	}
	else
		ft_putnbr_base(ptr, "0123456789abcdef", count);
}
