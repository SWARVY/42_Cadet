/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinhyeonho <sinhyeonho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:28:23 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/20 18:10:28 by sinhyeonho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char		*string;
	size_t		len;
	size_t		cnt;

	len = ft_strlen(src);
	string = (char *)malloc(sizeof(char) * (len + 1));
	cnt = 0;
	if (!string)
		return (0);
	while (src[cnt])
	{
		string[cnt] = src[cnt];
		cnt += 1;
	}
	string[cnt] = src[cnt];
	return (string);
}
