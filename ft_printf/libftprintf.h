/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:59:05 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/26 00:49:20 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_putchar(char c);
int		ft_puthex(unsigned int n, char *base, int mayus);
int		ft_putstr(char *str);
int		ft_putptr(void *ptr);
int		ft_print_unsigned(unsigned int n);
int		ft_putnbr_base(unsigned int n, const char *base);
int		ft_exec_ftype(char type, va_list *ptr, unsigned int *count);
int		ft_printf(char const *str, ...);

#endif