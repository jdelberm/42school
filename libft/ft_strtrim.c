/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:39:02 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/05 22:55:35 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	start;
	size_t	end;

	if (*s1 == 0)
		return (ft_strdup(""));
	if (*set == 0)
		return (ft_strdup(s1));
	start = 0;
	i = 0;
	while (set[i])
	{
		while (s1[start] == set[i])
		{
			start++;
			i = -1;
			break ;
		}
		i++;
	}
	end = ft_strlen(s1) - 1;
	i = 0;
	while (set[i])
	{
		while (s1[end] == set[i] && end > 0)
		{
			end--;
			i = -1;
			break ;
		}
		i++;
	}
	res = ft_substr(s1, start, end + 1 - start);
	if (!res)
		return (0);
	return (res);
}
