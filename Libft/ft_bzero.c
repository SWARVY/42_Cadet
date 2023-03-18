/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:19:27 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/18 15:03:34 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h";
#include <stdlib.h>

void	ft_bzero(void *s, size_t size)
{
	ft_memset(s, 0, size);
}
