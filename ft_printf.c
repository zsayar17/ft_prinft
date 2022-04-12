/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:09:48 by aozsayar          #+#    #+#             */
/*   Updated: 2022/03/04 14:09:48 by aozsayar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	typeofvalues(char a, va_list liste)
{
	if (a == 'd' || a == 'i')
		return (ft_putnbr(va_arg(liste, int)));
	else if (a == 'c')
		return (ft_putchar(va_arg(liste, int)));
	else if (a == 's')
		return (ft_putstr(va_arg(liste, char *)));
	else if (a == 'p')
		return (ft_putadress(va_arg(liste, size_t)));
	else if (a == 'u')
		return (ft_putnbrunsigned(va_arg(liste, unsigned int)));
	else if (a == 'x')
		return (ft_puthexadec(va_arg(liste, unsigned int), 'a'));
	else if (a == 'X')
		return (ft_puthexadec(va_arg(liste, unsigned int), 'A'));
	else if (a == '%')
		return (ft_putchar('%'));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	liste;
	int		len;

	len = 0;
	va_start(liste, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			len += typeofvalues(*str, liste);
		}
		else
			len += ft_putchar(*str);
		str++;
	}
	return (len);
}
