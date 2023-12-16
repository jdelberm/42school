/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:57:44 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/16 11:19:59 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Applies the function 'f' to each element of the linked list 'lst'
 * and creates a new list with the results.
 * If the allocation fails, the function frees the memory of the new list
 * and returns NULL.
 *
 * @param lst The original list.
 * @param f The function to apply to each element.
 * @param del The function used to delete the content of an element if needed.
 * @return The new list or NULL if an error occurred.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_elem;

	head = NULL;
	while (lst)
	{
		new_elem = ft_lstnew(0);
		if (!new_elem)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		new_elem->content = f(lst->content);
		ft_lstadd_back(&head, new_elem);
		lst = lst->next;
	}
	return (head);
}
