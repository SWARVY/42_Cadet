/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:19:57 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/13 21:51:51 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cnt;
	int				len;

	cnt = 0;
	while (src[cnt] && cnt + 1 < size)
	{
		dest[cnt] = src[cnt];
		cnt += 1;
	}
	dest[cnt] = '\0';
	len = ft_strlen(src);
	return (len);
}
