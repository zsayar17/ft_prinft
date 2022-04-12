/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignedint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 23:50:07 by aozsayar          #+#    #+#             */
/*   Updated: 2022/03/05 01:18:31 by aozsayar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrunsigned_2(unsigned int d)
{
	if (d > 9)
	{
		ft_putnbrunsigned_2(d / 10);
		ft_putchar('0' + (d % 10));
	}
	else
		ft_putchar('0' + (d % 10));
}

int	ft_putnbrunsigned(unsigned int d)
{
	int	len;

	len = 0;
	ft_putnbrunsigned_2(d);
	if (d == 0)
		return (1);
	while (d != 0)
	{
		len++;
		d /= 10;
	}
	return (len);
}
