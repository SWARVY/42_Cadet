/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinhyeonho <sinhyeonho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:20:05 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/20 18:08:24 by sinhyeonho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	idx;
	size_t	tmp;

	idx = 0;
	if (!needle[idx])
		return ((char *)haystack);
	while (len && haystack[idx])
	{
		tmp = 0;
		while (haystack[idx + tmp] == needle[tmp]
			&& idx + tmp < len && haystack[idx + tmp])
			tmp += 1;
		if (!needle[tmp])
			return ((char *)haystack + idx);
		idx += 1;
	}
	return ((void *)0);
}
