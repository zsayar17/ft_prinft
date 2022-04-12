/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 23:58:03 by aozsayar          #+#    #+#             */
/*   Updated: 2022/03/05 01:35:49 by aozsayar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_putnbr(int d);
int		ft_putstr(char *d);
int		ft_putchar(char a);
int		ft_putadress(size_t a);
int		ft_puthexadec(unsigned int a, char b);
int		ft_putnbrunsigned(unsigned int d);

int		typeofvalues(char a, va_list liste);
size_t	ft_strlen(const char *ptr);
char	*reverse(char *ptr);
void	ft_putnbr_2(int d);
void	processadress(char *ptr, size_t a, char b);
void	processhexadec(char *ptr, unsigned int a, char b);
void	ft_putnbrunsigned_2(unsigned int d);

#endif
