/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinhyeonho <sinhyeonho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:19:46 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/19 13:21:29 by sinhyeonho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*temp_dst;
	unsigned char	*temp_src;

	if (!dst && !src)
		return (0);
	temp_dst = (unsigned char *)dst;
	temp_src = (unsigned char *)src;
	while (n--)
		*temp_dst++ = *temp_src++;
	return (dst);
}
