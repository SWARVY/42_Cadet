/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinhyeonho <sinhyeonho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:20:07 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/18 20:28:14 by sinhyeonho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	int		len;

	tmp = (char *)s;
	len = ft_strlen(s);
	while (*tmp)
		tmp += 1;
	while (len > 0)
	{
		if (*tmp == c)
			return (tmp);
		tmp -= 1;
		len -= 1;
	}
	return ((void *)0);
}
