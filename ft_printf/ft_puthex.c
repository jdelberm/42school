/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 13:47:31 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/24 13:59:51 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex(unsigned int n, char *base, int mayus)
{
	if (mayus)
		ft_putstr("0X");
	else
		ft_putstr("0x");
	return ft_itobase(n, base);
}
