/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:52:26 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/14 07:50:55 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Applies the function `f` to each character of the string `s` to create a new
 * string
 * resulting from successive applications of `f`.
 *
 * @param s The string to be mapped.
 * @param f The function to apply to each character of `s`.
 * @return The new string created by applying `f` to each character of `s`.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	i;

	res = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!res)
		return (0);
	i = -1;
	while (s[++i])
		res[i] = f(i, s[i]);
	return (res);
}
