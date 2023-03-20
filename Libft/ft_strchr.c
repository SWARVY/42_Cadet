/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinhyeonho <sinhyeonho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:19:53 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/18 20:21:17 by sinhyeonho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(char const *s, int c)
{
	char	*tmp;
	int		cnt;

	cnt = 0;
	tmp = (char *)s;
	while (*tmp)
	{
		if (*tmp == c)
			return (tmp);
		tmp++;
	}
	return ((void *)0);
}
