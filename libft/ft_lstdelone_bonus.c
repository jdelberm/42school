/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:22:10 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/14 07:53:00 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Deletes a single node from a linked list.
 *
 * This function deletes the specified node from a linked list. The 'del'
 * function
 * is called to free the memory occupied by the content of the node.
 *
 * @param lst The node to be deleted.
 * @param del The function used to delete the content of the node.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
