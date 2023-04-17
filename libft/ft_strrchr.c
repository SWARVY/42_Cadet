/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:20:07 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/21 16:01:30 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = 0;
	while (*s)
	{
		s++;
		len++;
	}
	while (len--)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s--;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (0);
}
