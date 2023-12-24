/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 02:00:10 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/24 02:05:57 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putunbr(unsigned int nb)
{
	char	c;

	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb < 10)
	{
		c = nb + 48;
		write(1, &c, 1);
	}
	else
	{
		ft_putunbr(nb / 10);
		ft_putunbr(nb % 10);
	}
}