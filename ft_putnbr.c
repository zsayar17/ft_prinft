/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 22:23:36 by aozsayar          #+#    #+#             */
/*   Updated: 2022/03/05 00:47:25 by aozsayar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_2(int d)
{
	if (d == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		d = 147483648;
	}
	if (d < 0)
	{
		ft_putchar('-');
		ft_putnbr_2(-d);
	}
	else if (d > 9)
	{
		ft_putnbr_2(d / 10);
		ft_putchar('0' + (d % 10));
	}
	else
		ft_putchar('0' + (d % 10));
}

int	ft_putnbr(int d)
{
	int	len;

	len = 0;
	ft_putnbr_2(d);
	if (d == 0)
		return (1);
	else if (d < 0)
		len++;
	while (d != 0)
	{
		len++;
		d /= 10;
	}
	return (len);
}
