/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilits.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 22:23:40 by aozsayar          #+#    #+#             */
/*   Updated: 2022/03/05 00:33:19 by aozsayar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *ptr)
{
	size_t	counter;

	counter = 0;
	while (*ptr)
	{
		counter++;
		ptr++;
	}
	return (counter);
}

char	*reverse(char *ptr)
{
	size_t	len;
	size_t	endindex;
	size_t	i;
	char	temp;

	i = 0;
	len = ft_strlen(ptr);
	endindex = len - 1;
	while (*ptr && i < endindex)
	{
		temp = ptr[endindex];
		ptr[endindex] = ptr[i];
		ptr[i] = temp;
		endindex--;
		i++;
	}
	return (ptr);
}
