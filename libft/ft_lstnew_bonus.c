/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:02:01 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/14 07:53:35 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Creates a new list node with the given content.
 *
 * This function allocates memory for a new list node and initializes its
 * content with the given value. The next pointer of the node is set to NULL.
 *
 * @param content The content to be stored in the new node.
 * @return A pointer to the newly created list node, or NULL if memory
 * allocation fails.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (!lst)
		return (0);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
