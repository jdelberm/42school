/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:25:26 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/14 07:34:51 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*aux;

	tmp = *lst;
	if (!tmp)
	{
		free(tmp);
	}
	else
	{
		while (tmp)
		{
			del(tmp->content);
			aux = tmp->next;
			free(tmp);
			tmp = aux;
		}
		*lst = NULL;
	}
}
