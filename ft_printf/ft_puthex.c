/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 13:47:31 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/25 21:10:47 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex(unsigned int n, char *base, int mayus)
{
	if (mayus)
		ft_putstr("0X");
	else
		ft_putstr("0x");
	return ft_putnbr_base(n, base);
}
