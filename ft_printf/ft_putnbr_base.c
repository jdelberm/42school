/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:45:19 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/27 00:45:29 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <unistd.h>
#include <stdint.h>

int	ft_putnbr_base(long long n, const char *base, int *count)
{
	size_t	base_len;

	base_len = ft_strlen(base);
	if (n < 0)
	{
		ft_putchar('-', count);
		n *= -1;
	}
	if ((size_t)n < base_len)
		ft_putchar(base[n], count);
	else
	{
		ft_putnbr_base(n / base_len, base, count);
		ft_putnbr_base(n % base_len, base, count);
	}
	return (1);
}
