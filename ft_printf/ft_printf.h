/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judelgad <judelgad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:59:05 by judelgad          #+#    #+#             */
/*   Updated: 2023/12/26 10:41:41 by judelgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
int		ft_putptr(void *ptr, int *count);
int		ft_print_unsigned(unsigned int n);
int		ft_putnbr_base(unsigned int n, const char *base, int *count);
int		ft_exec_ftype(char type, va_list *ptr, int *count);
int		ft_printf(char const *str, ...);

#endif