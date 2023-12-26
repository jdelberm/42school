/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:49:47 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/27 00:45:15 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_putstr(char *str, int *count)
{
	if (!str)
		ft_putstr("(null)", count);
	else
		while (*str)
			ft_putchar(*str++, count);
}
