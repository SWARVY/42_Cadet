/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:28:13 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/18 15:22:30 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		i;
	void	*array;

	array = malloc(count * size);
	if (!array) return (NULL);
	ft_bzero(array, count * size);
	return (array);
}
