/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:31:34 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/26 23:15:28 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	len = ft_strlen(s);
	while (len--)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}

int	ft_strlen(const char *s)
{
	int	cnt;

	cnt = 0;
	while (s[cnt])
		cnt += 1;
	return (cnt);
}

