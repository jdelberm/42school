/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:06:17 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/16 09:08:16 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/**
 * Writes a character to the specified file descriptor.
 *
 * @param c The character to be written.
 * @param fd The file descriptor to write to.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
