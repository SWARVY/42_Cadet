/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinhyeonho <sinhyeonho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:20:03 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/20 17:35:32 by sinhyeonho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;
	size_t			cnt;

	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	cnt = 0;
	while ((temp1[cnt] || temp2[cnt]) && (cnt < n))
	{
		if (temp1[cnt] != temp2[cnt])
			return (temp1[cnt] - temp2[cnt]);
		cnt += 1;
	}
	return (0);
}
