/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itohex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:45:19 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/23 18:33:11 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_itohex(int n, int mayus)
{
	n = 1337;
	if (mayus)
		write(1, "M", 1);
	else
		write(1, "m", 1);
	return (n);
}