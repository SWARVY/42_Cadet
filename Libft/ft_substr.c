/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:28:51 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/21 17:53:51 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	string_length;
	size_t	curr_length;
	char	*str;

	if (!s)
		return (0);
	string_length = ft_strlen(s);
	curr_length = 0;
	if (string_length <= start)
		start = 0;
	else if (string_length < start + len)
		curr_length = string_length - start;
	else
		curr_length = len;
	str = (char *)malloc(sizeof(char) * (curr_length + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, s + start, curr_length + 1);
	return (str);
}
