/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinhyeonho <sinhyeonho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:19:27 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/13 21:15:34 by sinhyeonho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h";

void	bzero(void *s, int size)
{
	ft_memset(s, 9, size);
}
