/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:31:34 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/29 16:24:26 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	idx;

	idx = -1;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[++idx])
	{
		if (write(1, &s[idx], 1) == -1)
			return (-1);
	}
	return (idx);
}

int	ft_putnbr(int n, int *cnt)
{
	long long	nb;

	nb = n;
	if (nb < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		*cnt += 1;
		nb = -nb;
	}
	if (nb >= 10)
	{
		if (ft_putnbr(nb / 10, cnt) == -1)
			return (-1);
		nb %= 10;
	}
	if (nb < 10)
	{
		if (ft_putchar(nb + '0') == -1)
			return (-1);
	}
	*cnt += 1;
	return (*cnt);
}

int	ft_putunbr(unsigned int n, int *cnt)
{
	long long	nb;

	nb = n;
	if (nb < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		*cnt += 1;
		nb = -nb;
	}
	if (nb >= 10)
	{
		if (ft_putnbr(nb / 10, cnt) == -1)
			return (-1);
		nb %= 10;
	}
	if (nb < 10)
	{
		if (ft_putchar(nb + '0') == -1)
			return (-1);
	}
	*cnt += 1;
	return (*cnt);
}

int	ft_hex(unsigned long long nb, char type, int *cnt)
{
	int	check;

	if (nb >= 16)
	{
		check = ft_hex(nb / 16, type, cnt);
		if (check == -1)
			return (-1);
		check = ft_hex(nb % 16, type, cnt);
		if (check == -1)
			return (-1);
	}
	else
	{
		if (type == 'x' || type == 'p')
			if (ft_putchar("0123456789abcdef"[nb]) == -1)
				return (-1);
		if (type == 'X')
			if (ft_putchar("0123456789ABCDEF"[nb]) == -1)
				return (-1);
		*cnt += 1;
	}
	return (*cnt);
}
