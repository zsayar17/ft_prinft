/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 22:23:24 by aozsayar          #+#    #+#             */
/*   Updated: 2022/03/05 00:20:07 by aozsayar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *d)
{
	int	len;

	if (!d)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = 0;
	while (*d != '\0')
	{
		ft_putchar(*d);
		len++;
		d++;
	}
	return (len);
}
