/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:19:55 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/26 21:09:25 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	cnt;

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
