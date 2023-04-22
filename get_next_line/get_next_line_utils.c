/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:11:40 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/04/22 13:25:32 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	cnt;

	cnt = 0;
	while (s[cnt])
		cnt += 1;
	return (cnt);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	cnt;

	cnt = 0;
	if (!size)
		return (ft_strlen(src));
	while (src[cnt] && cnt + 1 < size)
	{
		dest[cnt] = src[cnt];
		cnt += 1;
	}
	dest[cnt] = '\0';
	return (ft_strlen(src));
}

char	*ft_strchr(char const *s, int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	while (*s)
	{
		if (*s == ch)
			return ((char *)s);
		s++;
	}
	if (!ch)
		return ((char *)s);
	return (0);
}

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

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ptr;

	if (!s1)
	{
		s1 = malloc(sizeof(char) + 1);
		if (!s1)
			return (0);
		s1[0] = 0;
	}
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ptr)
		return (make_free(&s1));
	ft_strlcpy(ptr, s1, ft_strlen(s1) + 1);
	ft_strlcpy(ptr + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	free(s1);
	return (ptr);
}
