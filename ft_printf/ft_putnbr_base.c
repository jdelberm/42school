/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:45:19 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/26 10:05:24 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libftprintf.h"
#include <unistd.h>

int	ft_putnbr_base(unsigned int n, const char *base, int *count)
{
	size_t	base_len;

	base_len = ft_strlen(base);
	if ((size_t)n < base_len)
		ft_putchar(base[n], count);
	else
	{
		ft_putnbr_base(n / base_len, base, count);
		ft_putnbr_base(n % base_len, base, count);
	}
	return (1);
}