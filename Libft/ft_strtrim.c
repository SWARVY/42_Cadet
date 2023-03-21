/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinhyeonho <sinhyeonho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:30:30 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/20 16:22:57 by sinhyeonho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		idx;
	int		len;

	idx = 0;
	len = ft_strlen(s1);
	if (ft_strchr(set, s1[0]))
	{
		idx += 1;
		len -= 1;
	}
	if (ft_strchr(set, s1[len - 1]) && len > 1)
		len -= 1;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return ((void *)0);
	ft_strlcpy(str, (char *)(s1 + idx), len);
	return (str);
}
