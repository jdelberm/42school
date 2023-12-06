/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:29:46 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/06 01:34:04 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	s1_size;
	size_t	s2_size;

	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	res = ft_calloc(s1_size + s2_size + 1, sizeof(char));
	if (!res)
		return (0);
	ft_memcpy(res, s1, s1_size);
	ft_memcpy(&res[s1_size], s2, s2_size);
	return (res);
}
