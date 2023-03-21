/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:30:30 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/21 18:09:26 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		head;
	int		tail;
	int		len;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	len = ft_strlen(s1);
	if (!len)
		return (ft_strdup(s1));
	head = 0;
	tail = len - 1;
	while (ft_strchr(set, s1[head]) && s1[head])
	{
		len -= 1;
		head += 1;
	}
	while (ft_strchr(set, s1[tail]) && s1[tail] && len > 1)
	{
		len -= 1;
		tail -= 1;
	}
	return (ft_substr(s1, head, len));
}
