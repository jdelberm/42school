/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:59:05 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/24 13:57:50 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>

size_t	ft_strlen(char *str);
int		ft_putchar(char c);
int		ft_puthex(unsigned int, char *base, int mayus);
void	ft_putnbr(int nb);
void	ft_putunbr(unsigned int nb);
int		ft_putstr(char *str);
int		ft_putptr(void *);
char	*ft_itoa(int n);
void	ft_print_pointer(void *ptr);
int		ft_print_unsigned(unsigned int n);
int		ft_itobase(int n, char *base);
int		ft_exec_ftype(char type, va_list *ptr, unsigned int *count);
int		ft_printf(char const *str, ...);

#endif