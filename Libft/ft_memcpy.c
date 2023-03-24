/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:19:46 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/24 17:10:59 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*temp_dst;
	unsigned char	*temp_src;

	if (!dst && !src)
		return (0);
	temp_dst = (unsigned char *)dst;
	temp_src = (unsigned char *)src;
	while (n--)
	{
		*temp_dst = *temp_src;
		temp_dst++;
		temp_src++;
	}
	return (dst);
}
