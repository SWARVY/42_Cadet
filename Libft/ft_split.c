/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinhyeonho <sinhyeonho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:46:16 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/03/18 18:50:03 by sinhyeonho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_seperator(char sep, char c)
{
	if (sep == c)
		return (1);
	return (0);
}

int	ft_strcnt(char *s, char c)
{
	int	cnt;
	int	check;
	int	amount;

	cnt = 0;
	check = 1;
	amount = 0;
	while (s[cnt])
	{
		if (!ft_check_seperator(c, s[cnt]) && check)
		{
			amount += 1;
			check = 0;
		}
		else if (ft_check_seperator(c, s[cnt]))
			check = 1;
		cnt += 1;
	}
	return (amount);
}

int	ft_strlen(char *s, char c, int index)
{
	int	len;

	len = 0;
	while (s[index])
	{
		if (ft_check_seperator(c, s[index]))
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
		while (ft_check_seperator(c, s[idx]))
			idx += 1;
		len = ft_strlen(s, c, idx);
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

	word_amount = ft_strcnt(s, c);
	res = (char **)malloc(sizeof(char *) * (word_amount + 1));
	result(s, c, res, word_amount);
	res[word_amount] = (void *)0;
	return (res);
}
