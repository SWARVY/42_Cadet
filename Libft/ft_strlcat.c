/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:19:55 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/13 21:49:22 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
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
