/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:59:13 by judelgad          #+#    #+#             */
/*   Updated: 2024/01/01 09:01:04 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>

size_t				ft_strlcpy(char *dst, const char *src, size_t size);
char				*ft_read_chunk(int fd);
char				*ft_extract_line(char *chunk);
char				*get_next_line(int fd);

#endif