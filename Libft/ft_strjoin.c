/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinhyeonho <sinhyeonho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:29:02 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/20 17:30:53 by sinhyeonho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size_a;
	int		size_b;
	int		idx;
	char	*str;

	size_a = ft_strlen(s1);
	size_b = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (size_a + size_b + 1));
	if (!str)
		return ((void *)0);
	idx = 0;
	while (s1[idx])
	{
		str[idx] = s1[idx];
		idx += 1;
	}
	idx = 0;
	while (s2[idx])
	{
		str[size_a + idx] = s2[idx];
		idx += 1;
	}
	str[size_a + size_b] = '\0';
	return (str);
}
