/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinhyeonho <sinhyeonho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:46:16 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/03/20 18:38:49 by sinhyeonho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strcnt(char const *s, char c)
{
	int	cnt;
	int	check;
	int	amount;

	cnt = 0;
	check = 1;
	amount = 0;
	while (s[cnt])
	{
		if (c != s[cnt] && check)
		{
			amount += 1;
			check = 0;
		}
		else if (c == s[cnt])
			check = 1;
		cnt += 1;
	}
	return (amount);
}

int	charcnt(char const *s, char c, int index)
{
	int	len;

	len = 0;
	while (s[index])
	{
		if (c == s[index])
			break ;
		len += 1;
		index += 1;
	}
	return (len);
}

void	result(char const *s, char c, char **res, int word_amount)
{
	int	i;
	int	j;
	int	idx;
	int	len;

	i = 0;
	idx = 0;
	while (i < word_amount)
	{
		j = 0;
		while (c == s[idx])
			idx += 1;
		len = charcnt(s, c, idx);
		res[i] = (char *)malloc(sizeof(char) * (len + 1));
		while (j < len)
		{
			res[i][j] = s[idx];
			j += 1;
			idx += 1;
		}
		res[i][j] = '\0';
		i += 1;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		word_amount;

	word_amount = strcnt(s, c);
	res = (char **)malloc(sizeof(char *) * (word_amount + 1));
	if (!res)
		return (0);
	result(s, c, res, word_amount);
	res[word_amount] = (void *)0;
	return (res);
}
