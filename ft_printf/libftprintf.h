/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:59:05 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/23 18:18:18 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_putchar(va_list c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
char	*ft_itoa(int n);
void	ft_print_pointer(void *ptr);
int		ft_print_unsigned(unsigned int n);
int		ft_itohex(int n, int mayus);
int		ft_exec_ftype(char type, va_list ptr, unsigned int count);
int		ft_printf(char const *str, ...);

#endif