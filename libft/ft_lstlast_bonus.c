/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 22:56:34 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/14 07:46:54 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Returns the last element of a linked list.
 *
 * @param lst - The linked list.
 * @return The last element of the linked list, or NULL if the list is empty.
 */
/**
 * Returns the last element of a linked list.
 *
 * @param lst The head of the linked list.
 * @return The last element of the linked list.
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
