/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 22:48:06 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/03/26 23:25:51 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	options()
{
	
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	
	va_start(ap, str);
	while (*str)
	{
		
	}
	va_end(ap);
	return (0);
}

int	main(int ac, char **av)
{
	(void)ac;
	ft_printf(av[1], av[2], av[3]);
}