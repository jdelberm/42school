/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:42:32 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/13 20:27:09 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	size_t	i;

	tmp = lst;
	i = 0;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
