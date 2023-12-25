/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 20:24:39 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/15 12:05:45 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	tf_size;
	char	*found;

	tf_size = ft_strlen(to_find);
	if (!tf_size)
		return (str);
	found = 0;
	i = -1;
	while (str[++i] && i < len && !found)
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] && i + j < len)
			j++;
		if (!to_find[j])
			found = &str[i];
	}
	return (found);
}
