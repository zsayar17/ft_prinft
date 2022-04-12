/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 22:23:16 by aozsayar          #+#    #+#             */
/*   Updated: 2022/03/05 00:35:41 by aozsayar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	processadress(char *ptr, size_t a, char b)
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

int	ft_putadress(size_t a)
{
	char	*ptr;
	size_t	as;
	int		len;

	len = 0;
	len += ft_putchar('0');
	len += ft_putchar('x');
	if (a == 0)
		return (len + ft_putchar('0'));
	as = a;
	while (as != 0)
	{
		len++;
		as /= 16;
	}
	ptr = (char *)malloc(sizeof(char) * len + 1);
	processadress(ptr, a, 'a');
	ptr = reverse(ptr);
	ft_putstr(ptr);
	free(ptr);
	return (len);
}
