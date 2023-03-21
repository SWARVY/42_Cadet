/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinhyeonho <sinhyeonho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:19:24 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/21 13:07:55 by sinhyeonho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_white_space(const char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
	{
		if (str[cnt] == 32 || str[cnt] == '\n' || str[cnt] == '\t'
			|| str[cnt] == '\v' || str[cnt] == '\f' || str[cnt] == '\r')
			cnt += 1;
		else
			return (cnt);
	}
	return (cnt);
}

int	ft_atoi(const char *str)
{
	int			cnt;
	int			sign;
	long long	sum;

	sum = 0;
	sign = 1;
	cnt = is_white_space(str);
	if (str[cnt] == '+' || str[cnt] == '-')
	{
		if (str[cnt] == '-')
			sign = -sign;
		cnt += 1;
	}
	while (str[cnt] && (str[cnt] >= '0' && str[cnt] <= '9'))
	{
		sum = sum * 10 + (str[cnt] - '0');
		cnt += 1;
	}
	return (sum * sign);
}
