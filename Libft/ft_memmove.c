/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinhyeonho <sinhyeonho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:19:49 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/19 14:28:23 by sinhyeonho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*temp_dst;
	unsigned char	*temp_src;
	size_t			i;

	temp_dst = (unsigned char *)dst;
	temp_src = (unsigned char *)src;
	if (dst == src || !len)
		return (dst);
	if (!dst && !src)
		return (0);
	i = -1;
	if (dst < src)
	{
		while (++i < len)
			temp_dst[i] = temp_src[i];
	}
	else
	{
		while (++i < len)
			temp_dst[len - 1 - i] = temp_src[len - 1 - i];
	}
	return ((void *)temp_dst);
}
