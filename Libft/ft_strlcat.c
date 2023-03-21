/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinhyeonho <sinhyeonho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:19:55 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/20 16:31:27 by sinhyeonho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	cnt;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	cnt = 0;
	while (*(src + cnt) && len_dest + cnt + 1 < size)
	{
		*(dest + len_dest + cnt) = *(src + cnt);
		cnt += 1;
	}
	*(dest + len_dest + cnt) = '\0';
	if (size < len_dest)
		return (size + len_src);
	return (len_dest + len_src);
}
