/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinhyeonho <sinhyeonho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:28:23 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/18 16:58:47 by sinhyeonho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strdup(char *src)
{
	char	*string;
	int		len;
	int		cnt;

	len = ft_strlen(src);
	string = (char *)malloc(sizeof(char) * (len + 1));
	cnt = 0;
	while (src[cnt])
	{
		string[cnt] = src[cnt];
		cnt += 1;
	}
	string[cnt] = '\0';
	return (string);
}
