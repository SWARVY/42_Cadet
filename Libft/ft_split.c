/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:46:16 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/03/18 15:04:09 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_seperator(char *charset, char c)
{
	int	cnt;

	cnt = 0;
	while (charset[cnt])
	{
		if (charset[cnt] == c)
			return (1);
		cnt += 1;
	}
	return (0);
}

int	ft_strcnt(char *str, char *charset)
{
	int	cnt;
	int	check;
	int	amount;

	cnt = 0;
	check = 1;
	amount = 0;
	while (str[cnt])
	{
		if (!ft_check_seperator(charset, str[cnt]) && check)
		{
			amount += 1;
			check = 0;
		}
		else if (ft_check_seperator(charset, str[cnt]))
			check = 1;
		cnt += 1;
	}
	return (amount);
}

int	ft_strlen(char *str, char *charset, int index)
{
	int	len;

	len = 0;
	while (str[index])
	{
		if (ft_check_seperator(charset, str[index]))
			break ;
		len += 1;
		index += 1;
	}
	return (len);
}

void	result(char *str, char *charset, char **res, int word_amount)
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
		while (ft_check_seperator(charset, str[idx]))
			idx += 1;
		len = ft_strlen(str, charset, idx);
		res[i] = (char *)malloc(sizeof(char) * (len + 1));
		while (j < len)
		{
			res[i][j] = str[idx];
			j += 1;
			idx += 1;
		}
		res[i][j] = '\0';
		i += 1;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		word_amount;

	word_amount = ft_strcnt(str, charset);
	res = (char **)malloc(sizeof(char *) * (word_amount + 1));
	result(str, charset, res, word_amount);
	res[word_amount] = (void *)0;
	return (res);
}
