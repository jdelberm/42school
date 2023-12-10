/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:18:34 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/10 19:30:52 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char c;
	if(n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if( n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if(n < 10)
	{
		c = n + 48;
		write(fd, &c, 1);
	}
	else{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}