/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:29:02 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/13 21:46:36 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	seplen(char *str, int size)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		cnt += 1;
	return (cnt * (size - 1));
}

int	strsum(char **strs, int size)
{
	int	cnt;
	int	i;
	int	j;

	cnt = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			cnt += 1;
			j += 1;
		}
		i += 1;
		j = 0;
	}
	return (cnt);
}

char	*make_join(int size, char **strs, char *sep)
{
	char	*join;
	int		idx;
	int		i;
	int		j;
	int		csize;

	csize = sizeof(char);
	join = (char *)malloc(csize * (strsum(strs, size) + seplen(sep, size) + 1));
	idx = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		while (strs[i][j])
			join[idx++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			join[idx++] = sep[j++];
		i += 1;
		j = 0;
	}
	join[idx] = '\0';
	return (join);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;

	if (size == 0)
	{
		join = (char *)malloc(sizeof(char) * 1);
		join[0] = '\0';
		return (join);
	}
	join = make_join(size, strs, sep);
	return (join);
}
