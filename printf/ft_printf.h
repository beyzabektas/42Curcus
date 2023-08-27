/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbektas <bbektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:52:01 by bbektas           #+#    #+#             */
/*   Updated: 2023/08/04 23:05:18 by bbektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	format_specifier(va_list arglist, char format);
int	ft_putnbr(int number);
int	ft_unsigned(unsigned int w);
int	ft_putstr(char *str);
int	ft_hex(unsigned int d, char w);
int	ft_putptr(unsigned long ptr, int i);
#endif