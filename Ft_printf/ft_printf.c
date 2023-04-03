/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 22:48:06 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/04/03 14:52:47 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	options(va_list ap, const char *t)
{
	int	cnt;

	cnt = 0;
	if (*t == 'c')
		return (ft_putchar(va_arg(ap, int)));
	if (*t == 's')
		return (ft_putstr(va_arg(ap, char *)));
	if (*t == 'p')
	{
		if (write(1, "0x", 2) == -1)
			return (-1);
		cnt += 2;
		return (ft_hex((unsigned long long)va_arg(ap, void *), *t, &cnt));
	}
	if (*t == 'd' || *t == 'i')
		return (ft_putnbr(va_arg(ap, int), &cnt));
	if (*t == 'u')
		return (ft_putunbr(va_arg(ap, unsigned int), &cnt));
	if (*t == 'x' || *t == 'X')
		return (ft_hex((unsigned long long)va_arg(ap, unsigned int), *t, &cnt));
	if (*t == '%')
		return (ft_putchar('%'));
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		res;
	int		len;

	res = 0;
	len = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			len = options(ap, str + 1);
			str += 2;
		}
		else
			len = write(1, str++, 1);
		if (len >= 0)
			res += len;
		else
			return (-1);
	}
	va_end(ap);
	return (res);
}
