/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 13:47:31 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/26 10:04:13 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex(unsigned int n, char *base, int mayus, int *count)
{
	if (mayus)
		ft_putstr("0X", count);
	else
		ft_putstr("0x", count);
	return ft_putnbr_base(n, base, count);
}
