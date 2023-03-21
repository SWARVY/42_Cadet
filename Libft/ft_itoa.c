/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:36:50 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/03/21 18:11:15 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	mypow(int n)
{
	int	val;

	val = 1;
	while (n--)
		val *= 10;
	return (val);
}

int	numlen(long long n)
{
	int	len;

	len = 0;
	while (n / 10)
	{
		len += 1;
		n /= 10;
	}
	return (len + 1);
}

char	*memory_allocate(int n, int len)
{
	char	*str;

	if (n >= 0)
	{
		str = (char *)malloc(sizeof(char) * (len + 1));
		if (!str)
			return (0);
	}
	else
	{
		str = (char *)malloc(sizeof(char) * (len + 2));
		if (!str)
			return (0);
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	long long	nb;
	int			len;
	int			idx;

	nb = n;
	len = numlen(nb);
	idx = 0;
	str = memory_allocate(n, len);
	if (!str)
		return (0);
	if (n < 0)
	{
		str[idx] = '-';
		nb = -nb;
		idx += 1;
	}
	while (len--)
	{
		str[idx] = (nb / mypow(len)) + '0';
		nb -= (nb / mypow(len)) * mypow(len);
		idx++;
	}
	str[idx] = '\0';
	return (str);
}
