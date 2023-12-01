/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 20:28:30 by judelgad          #+#    #+#             */
/*   Updated: 2023/11/30 20:35:36 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi(const char *ptr)
{
	int	num;
	int	sign;
	int	nlen;

	num = 0;
	sign = 1;
	while (*ptr == ' ' || *ptr == '\f' || *ptr == '\n' || *ptr == '\r'
		|| *ptr == '\t' || *ptr == '\v')
		ptr++;
	if (!(*ptr == '-' || *ptr == '+'))
		return (num);
	else
	{
		if (*ptr == '-')
		{
			sign *= -1;
			ptr++;
		}
	}
	nlen = ft_strlen(*ptr);
	while (*ptr >= '0' && *ptr <= '9')
	{
		num += (*ptr - 48) nlen--;
	}
}

int	main(void)
{
}