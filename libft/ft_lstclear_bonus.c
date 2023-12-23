/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:25:26 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/16 11:05:16 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Clears a linked list by deleting all nodes and freeing their memory.
 *
 * This function iterates through the linked list pointed to by `lst` and calls
 * the `del` function on each node's data. It then frees the memory occupied by
 * each node. Finally, it sets the `lst` pointer to NULL.
 *
 * @param lst The address of a pointer to the first node of the linked list.
 * @param del The function used to delete the data of each node.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*aux;

	tmp = *lst;
	if (tmp)
	{
		while (tmp)
		{
			aux = tmp->next;
			ft_lstdelone(tmp, del);
			tmp = aux;
		}
		*lst = NULL;
	}
}
