/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:59:13 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/28 21:19:16 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_read_char(int fd, char *c);
char	*get_next_line(int fd);

#endif