/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itobase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:45:19 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/24 13:59:22 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <unistd.h>

int	ft_itobase(int n, char *base)
{
	size_t	base_len;
	char	c;

	base_len = ft_strlen(base);
	if ((size_t)n < base_len)
	{
		c = base[n];
		write(1, &c, 1);
	}
	else
	{
		ft_itobase(n / base_len, base);
		ft_itobase(n % base_len, base);
	}
	return (1);
}