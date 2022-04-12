/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexadec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 22:22:30 by aozsayar          #+#    #+#             */
/*   Updated: 2022/03/05 00:36:31 by aozsayar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	processhexadec(char *ptr, unsigned int a, char b)
{
	while (a != 0)
	{
		if ((a % 16) > 9)
			*ptr = b + ((a % 16) - 10);
		else
			*ptr = '0' + (a % 16);
		a /= 16;
		ptr++;
	}
	*ptr = '\0';
}

int	ft_puthexadec(unsigned int a, char b)
{
	char			*ptr;
	unsigned int	as;
	int				len;

	as = a;
	len = 0;
	if (a == 0)
		return (len + ft_putchar('0'));
	while (as != 0)
	{
		len++;
		as /= 16;
	}
	ptr = (char *)malloc(sizeof(char) * len + 1);
	processadress(ptr, a, b);
	ptr = reverse(ptr);
	ft_putstr(ptr);
	free(ptr);
	return (len);
}
