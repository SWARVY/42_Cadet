/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:46:16 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/03/21 19:10:43 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	make_free(char **res, int idx)
{
	if (!idx)
		free(res[0]);
	while (idx--)
		free(res[idx]);
	free(res);
}

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

int	result(char const *s, char c, char **res, int word_amount)
{
	int		i;
	int		j;
	int		idx;
	int		len;

	i = -1;
	idx = 0;
	while (++i < word_amount)
	{
		j = -1;
		while (c == s[idx])
			idx += 1;
		len = charcnt(s, c, idx);
		res[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!res[i])
		{
			make_free(res, i);
			return (0);
		}
		while (++j < len)
			res[i][j] = s[idx++];
		res[i][j] = '\0';
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		word_amount;

	word_amount = strcnt(s, c);
	res = (char **)malloc(sizeof(char *) * (word_amount + 1));
	if (!res)
		return (0);
	if (!result(s, c, res, word_amount))
		return (0);
	res[word_amount] = (void *)0;
	return (res);
}
