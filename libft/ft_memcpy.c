/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:21:17 by judelgad          #+#    #+#             */
/*   Updated: 2023/11/29 15:50:51 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TODO: comment main after testing
//TODO: review code in pythontutor
//TODO: review norminette
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*str_dest;
	char	*str_src;

	str_dest = (char *) dest;
	str_src = (char *) src;
	i = 0;
	while(i < n)
	{
		str_dest[i] = str_src[i];
		i++;
	}
}

int	main(void)
{
	char	dest[33] = "It was a pleasure, I have to go!";
	char 	src[18] = "Please real quick";
	size_t	nbytes = 17;

	printf("Standard: before modification =>'%s'\n", dest);
	memcpy(dest, src, nbytes);
	printf("Standard: after modification =>\t'%s'\n", dest);

	char dest2[33] = "It was a pleasure, I have to go!";
	
	printf("Custom: before modification =>\t'%s'\n", dest2);
	ft_memcpy(dest2, src, nbytes);
	printf("Custom: after modification =>\t'%s'\n", dest2);
}